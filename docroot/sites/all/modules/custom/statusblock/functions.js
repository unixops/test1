// JavaScript Document

function querySt(ji) 
	{
		hu = window.location.search.substring(1);
		gy = hu.split("&");
	
		for (i=0;i<gy.length;i++) 
		{
			ft = gy[i].split("=");
			if (ft[0] == ji) 
			{
				return ft[1];
			}
		}
	}
	
	var mode = querySt("mode");
    var rail =  querySt("rail");
 	var weekend = querySt("weekend");

	/* Determine the default tab in Current Service Status
	If mode is provided then use it, otherwise get it from the cookie;
	if no cookie is found then default to the "subway" tab -- Kamal 4/18/2011 */
	
	if (mode == '' || mode == null)
	{
		// Get the mode from the cookie
		mode = Get_Cookie("ServiceStatusMode");
		if (mode == '' || mode == null)
			mode = "subway";
	}

	function ShowHide(div)
	{
		var scrollPos = parent.document.getElementById("messageDivInner").scrollTop
		parent.document.getElementById("messageDivInner").style.width = "424px"
		var control = parent.document.getElementById(div); 
		parent.document.getElementById("messageDivInner").style.height = ""  
		
		if(control.style.display == "inline" || control.style.display == "")
		{ 
			control.style.display = 'none';
			var message = parent.document.getElementById("messageDivInner").innerHTML   
			parent.document.getElementById("messageDivInner").innerHTML = ""
			parent.document.getElementById("messageDivInner").style.height = ""            
			parent.document.getElementById("messageDivInner").innerHTML = message
		}
		else   
		{              
			control.style.display = 'inline';
		}
		var h = parent.document.getElementById("messageDivInner").clientHeight
		var w = parent.document.getElementById("messageDivInner").clientWidth
	
		while(w > h && w > 260)
		{
			parent.document.getElementById("messageDivInner").style.width = (parseInt(parent.document.getElementById("messageDivInner").style.width)-5) + "px"
			h = parent.document.getElementById("messageDivInner").clientHeight
			w = parent.document.getElementById("messageDivInner").clientWidth
		}

		if(h > 400)
		{
			parent.document.getElementById("messageDivInner").style.height = "400px"
			h = parent.document.getElementById("messageDivInner").clientHeight
		}
	
		var t = parseInt(parent.document.getElementById("messageDivInner").style.top)
		parent.document.getElementById("messageDivInner").scrollTop = scrollPos
	} 
	
	function showMessage(mode,e,i)
	{
		if(i == 0)
		{
			return false
		}
		else
		{
			if (weekend=="yes")
			{
				window.parent.document.getElementById("servicestatusDiv").style.display = "none";
				//window.parent.document.getElementById("mapDivInner").style.display = "none";
				window.parent.document.getElementById("weekenderleftPanel").style.display = 'none';
				window.parent.document.getElementById("servicestatusdetailscenterDiv").style.display = 'block';
				window.parent.frames["servicestatusdetailscenterIframe"].location.href = "http://mta.info/status/serviceStatusWeekender.php?linename=" + e + "&mode=" + mode;
				
				window.parent.document.getElementById("servicestatusdetailsleftDiv").style.display = 'block';
				window.parent.frames["servicestatusdetailsleftIframe"].location.href = "http://mta.info/status/serviceStatusWeekenderLineInfo.php?linename=" + e + "&mode=" + mode;
			}
			else
			{
				document.forms["messageForm"].elements["lineName"].value=e
				document.forms["messageForm"].elements["mode"].value=mode
				document.forms["messageForm"].target = "_top";
				document.forms["messageForm"].submit()
			}
		}
	}
	
	function init()
	{
		var e
		if(mode == "subway" || mode == "bus" || mode == "rail" || mode == "BT")
		{
			setDefaultTab(mode)
		}
	}
		
	function SetCookie(cookieName,cookieValue,nDays) 
	{
		var today = new Date();
		var expire = new Date();
		if (nDays==0)
		{
			document.cookie = cookieName+"="+escape(cookieValue)
		}
		else
		{
			expire.setTime(today.getTime() + 3600000*24*nDays);
			document.cookie = cookieName+"="+escape(cookieValue) + ";expires="+expire.toGMTString();
		}
	}

	function Get_Cookie(check_name) 
	{
		// first we'll split this cookie up into name/value pairs
		// note: document.cookie only returns name=value, not the other components
		var a_all_cookies = document.cookie.split( ';' );
		var a_temp_cookie = '';
		var cookie_name = '';
		var cookie_value = '';
		var b_cookie_found = false; // set boolean t/f default f

		for ( i = 0; i < a_all_cookies.length; i++ )
		{
			// now we'll split apart each name=value pair
			a_temp_cookie = a_all_cookies[i].split( '=' );
	
	
			// and trim left/right whitespace while we're at it
			cookie_name = a_temp_cookie[0].replace(/^\s+|\s+$/g, '');
	
			// if the extracted name matches passed check_name
			if ( cookie_name == check_name )
			{
				b_cookie_found = true;
				// we need to handle case where cookie has no value but exists (no = sign, that is):
				if ( a_temp_cookie.length > 1 )
				{
					cookie_value = unescape( a_temp_cookie[1].replace(/^\s+|\s+$/g, '') );
				}
				// note that in cases where cookie is initialized but no value, null is returned
							//alert(cookie_value)
				return cookie_value;
				break;
			}
			a_temp_cookie = null;
			cookie_name = '';
		}
		if ( !b_cookie_found )
		{
			return null;
		}
	}

	function setDefaultTab(e)
	{
		clearPanels();
		document.getElementById(e + "Div").style.display = "inline"
		document.getElementById(e + "Tab").style.backgroundColor = "#00bb11";
		document.getElementById(e + "Tab").style.color = "#FFFFFF";
		
		if (rail=="lirr")
		{
			document.getElementById("railLIRR").style.visibility = "visible";
			document.getElementById("railMNR").style.visibility = "hidden";
		}
		else
		{
			if (rail=="mnr")
			{
				document.getElementById("railLIRR").style.visibility = "hidden";
				document.getElementById("railMNR").style.visibility = "visible"; 
			}
		}
	}


	function changeTab(e)
	{
		clearPanels();
		
		dkam = document.getElementById(e + "Tab");
		document.getElementById(e + "Tab").style.backgroundColor =  "#00bb11";
		dkam.style.color = "#FFFFFF";
		
		d = document.getElementById(e + "Div");
		
		if (d != null) {
			d.style.display = "inline"
		}

		SetCookie("ServiceStatusMode",e,5)

	}

	function clearPanels()
	{
		document.getElementById("subwayDiv").style.display = "block"
		document.getElementById("busDiv").style.display = "none"
		document.getElementById("railDiv").style.display = "none"
		document.getElementById("BTDiv").style.display = "none"
		
		document.getElementById("subwayTab").style.backgroundColor = "#FFFFFF";
		document.getElementById("busTab").style.backgroundColor = "#FFFFFF";
		document.getElementById("railTab").style.backgroundColor = "#FFFFFF";
		document.getElementById("BTTab").style.backgroundColor = "#FFFFFF";
		
		document.getElementById("subwayTab").style.color = "#555";
		document.getElementById("busTab").style.color = "#555";
		document.getElementById("railTab").style.color = "#555";
		document.getElementById("BTTab").style.color = "#555";
	}
