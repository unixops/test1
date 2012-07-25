<script>
    var bingMapToken = ""
    </script><script src="http://advisory.mtanyct.info/token/bingToken.js" type="text/javascript"></script><script src="http://dev.virtualearth.net/mapcontrol/mapcontrol.ashx?v=6.3"></script><script src="http://Tripplanner.mta.info/MyTrip/js/landmarks.js" type="text/javascript"></script><script src="http://Tripplanner.mta.info/MyTrip/js/JSON.js" type="text/javascript"></script><script src="http://Tripplanner.mta.info/MyTrip/js/tripplanner_ext.js" type="text/javascript"></script><script src="http://Tripplanner.mta.info/MyTrip/js/CookieFunctions.js" type="text/javascript"></script>
<style type="text/css">
.listing
        {
            background-color: blue;
            color: white;
            font-family: arial;
            font-size: 10px;
            font-weight: normal;
            width: 215px;
        }</style>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>
	<link href="/css/jquery.datepick.css" rel="stylesheet" type="text/css" />
	<script type="text/javascript">


function HideLandmarkLists() {

    if (document.getElementById('fromAutoFillList')){

        document.getElementById('fromAutoFillList').style.visibility = "hidden"

    }

    if (document.getElementById('toAutoFillList')){

        document.getElementById('toAutoFillList').style.visibility = "hidden"

    }

}



function showHelpPage()
{
openWindow("http://tripplanner.mta.info/widget/help.htm")
}

function showAlertPage()
{
openWindow("http://tripplanner.mta.info/serviceAlert.aspx")
}

function showAdvisoriesPage()
{
openWindow("http://travel.mtanyct.info/serviceadvisory/")
}

var resultsWin

function openWindow(url)
{
if(!resultsWin)
{
resultsWin = window.open(url,"resultsWin","scrollbars=1,status=0,toolbar=0,menubar=0,resizable=1,width=850,height=650,top=100,left=100")
}
else
{
if(resultsWin.closed)
{
resultsWin = window.open(url,"resultsWin","scrollbars=1,status=0,toolbar=0,menubar=0,resizable=1,width=950,height=750,top=50,left=50")
}
else
{
resultsWin.close()
resultsWin = window.open(url,"resultsWin","scrollbars=1,status=0,toolbar=0,menubar=0,resizable=1,width=950,height=750,top=50,left=50")
}
resultsWin.focus()
}
}



function showElements()
{
document.getElementById("dateSelectCell").style.visibility="visible"
document.getElementById("alertsDiv").style.visibility="visible"
}



function hideElements()
{
document.getElementById("dateSelectCell").style.visibility="hidden"
document.getElementById("alertsDiv").style.visibility="hidden"
}


function showOptionsDiv()
{
hideElements()
slideInOptionsDiv()
}

function slideInOptionsDiv()
{
document.getElementById("optionsDiv").style.left = (parseInt(document.getElementById("optionsDiv").style.left)+20) + "px"
if(parseInt(document.getElementById("optionsDiv").style.left) < 20)
{
setTimeout("slideInOptionsDiv()",20)
}
}

function hideOptionsDiv()
{
document.getElementById("optionsDiv").style.left = (parseInt(document.getElementById("optionsDiv").style.left)-20) + "px"
if(parseInt(document.getElementById("optionsDiv").style.left) > -280)
{
setTimeout("hideOptionsDiv()",20)
}
else
{
showElements()
}
}


function showInstructionsDiv()
{
showInstructionsIndex()
hideElements()
slideInInstructionsDiv()
}

function slideInInstructionsDiv()
{
document.getElementById("instructionsDiv").style.left = (parseInt(document.getElementById("instructionsDiv").style.left)+20) + "px"
if(parseInt(document.getElementById("instructionsDiv").style.left) < 20)
{
setTimeout("slideInInstructionsDiv()",20)
}
}

function hideInstructionsDiv()
{
document.getElementById("instructionsDiv").style.left = (parseInt(document.getElementById("instructionsDiv").style.left)-20) + "px"
if(parseInt(document.getElementById("instructionsDiv").style.left) > -280)
{
setTimeout("hideInstructionsDiv()",20)
}
else
{
showElements()
}
}

function showAddressInstructions()
{
document.getElementById("instructionsIndex").style.display = "none"
document.getElementById("intersectionInstructions").style.display = "none"
document.getElementById("addressInstructions").style.display = "inline"
document.getElementById("instructionBackButton").style.visibility = "visible"
}

function showIntersectionInstructions()
{
document.getElementById("instructionsIndex").style.display = "none"
document.getElementById("intersectionInstructions").style.display = "inline"
document.getElementById("addressInstructions").style.display = "none"
document.getElementById("instructionBackButton").style.visibility = "visible"
}

function showInstructionsIndex()
{
document.getElementById("instructionsIndex").style.display = "inline"
document.getElementById("intersectionInstructions").style.display = "none"
document.getElementById("addressInstructions").style.display = "none"
document.getElementById("instructionBackButton").style.visibility = "hidden"
}










    </script></p>
<div style="border-width:0px; padding:0px; margin:0px; overflow:hidden; position:absolute; top:0px; left:0px; width:278px; height:439px; background-image:url(http://tripplanner.mta.info/widget/widget.png)">
	<div style="position:absolute; top:30px; left:30px; padding:0px; margin:0px; width:215px; height:42px; background-image:url(http://tripplanner.mta.info/widget/tripPlannerPlusLogo.jpg); oveflow:hidden;">&nbsp;</div>
	<div style="position:absolute; top:395px; left:50px; padding:0px; margin:0px; width:171px; height:43px; background-image:url(http://tripplanner.mta.info/widget/bgLogoMask.PNG); oveflow:hidden;">&nbsp;</div>
	<div id="tripplaner" style="background-color: transparent; width: 268px; height: 430px; border: solid black 0px; position: absolute; top:0px; left:10px; font-family: arial; font-size: 12px; oveflow:hidden;">
		<form name="tpForm">
			<div style="position: absolute; top: 85px; left: 12px;"><span style="font-weight: bolder">From</span></div>
			<input id="txtOriginInput" maxlength="2048" name="fromAddress" onclick="OnAddressTextBoxClick(this, 'fromAutoFillList');" onkeyup="ShowFromOptions(this, 'fromAutoFillList' );" style="position: absolute; top: 85px; left: 45px; width: 180px; font-size:12px; font-family:arial;" type="text" value="" /><span onclick="showInstructionsDiv()" style="cursor:pointer; position: absolute; top: 85px; left: 232px; font-size:28px; font-weight:bold; font-family;arial;">?</span>
			<div style="position: absolute; top: 110px; left: 12px;"><span style="font-weight: bolder">To </span></div>
			<input id="txtDestinationInput" maxlength="2048" name="toAddress" onclick="OnAddressTextBoxClick(this, 'toAutoFillList' );" onkeyup="ShowFromOptions(this, 'toAutoFillList' );" style="position: absolute; top: 110px; left: 45px; width: 180px; font-size:12px; font-family:arial;" type="text" value="" />
			<div style="position: absolute; top: 140px; left: 10px; font-weight:bold;">Depart<input checked="checked" id="DepId" name="Arrdep" type="radio" value="D" />&nbsp;Arrive <input id="ArrId" name="Arrdep" type="radio" value="A" /></div>
			<div style="position: absolute; top: 140px; left: 150px; font-weight:bold;">Accessible:<input id="accessibleChkbox" name="Atr" title="Do you want your trip to be wheelchair accessible?" type="checkbox" value="Y" /><img alt="" border="0" src="http://tripplanner.mta.info/RTP_ext/images/accessible.gif" style="position:relative; top:3px; left:0px;" /></div>
			<div style="position: absolute; top: 165px; left: 30px;"><span id="dateSelectCell"><select id="ddlHour" name="hour" style="font-size:12px; font-family:arial;"><option value="1">1</option><option value="2">2</option><option selected="selected" value="3">3</option><option value="4">4</option><option value="5">5</option><option value="6">6</option><option value="7">7</option><option value="8">8</option><option value="9">9</option><option value="10">10</option><option value="11">11</option><option value="12">12</option></select> <select id="ddlMinute" name="minute" style="font-size:12px; font-family:arial;"><option>00</option><option>01</option><option>02</option><option>03</option><option>04</option><option>05</option><option>06</option><option>07</option><option>08</option><option>09</option><option>10</option><option>11</option><option>12</option><option>13</option><option>14</option><option>15</option><option>16</option><option>17</option><option>18</option><option>19</option><option selected="selected">20</option><option>21</option><option>22</option><option>23</option><option>24</option><option>25</option><option>26</option><option>27</option><option>28</option><option>29</option><option>30</option><option>31</option><option>32</option><option>33</option><option>34</option><option>35</option><option>36</option><option>37</option><option>38</option><option>39</option><option>40</option><option>41</option><option>42</option><option>43</option><option>44</option><option>45</option><option>46</option><option>47</option><option>48</option><option>49</option><option>50</option><option>51</option><option>52</option><option>53</option><option>54</option><option>55</option><option>56</option><option>57</option><option>58</option><option>59</option></select> <select id="ddlampm" name="ampm" style="font-size:12px; font-family:arial;"><option value="am">a.m.</option><option selected="selected" value="pm">p.m.</option></select> </span></div>
			<div style="position: absolute; top: 190px; left: 30px;"><span id="dateSelectCell"><select name="date" style="width: 100px; height:20px; font-size:12px; font-family:arial;"><option value="07/25/2012">Today</option><option value="07/26/2012">Tomorrow</option><option value="07/27/2012">27-July</option><option value="07/28/2012">28-July</option><option value="07/29/2012">29-July</option><option value="07/30/2012">30-July</option><option value="07/31/2012">31-July</option><option value="08/01/2012">1-July</option><option value="08/02/2012">2-July</option><option value="08/03/2012">3-July</option><option value="08/04/2012">4-July</option><option value="08/05/2012">5-July</option><option value="08/06/2012">6-July</option><option value="08/07/2012">7-July</option></select> </span></div>
			<div style="position: absolute; top: 215px; left: 7px; height:25px; color:white; font-weight:bold;"><input checked="checked" id="xmodeB" name="xmodeB" type="checkbox" value="B" />Bus&nbsp; <input id="xmodeX" name="xmodeX" type="checkbox" value="X" />Exp Bus <input checked="checked" id="xmodeCT" name="xmodeCT" type="checkbox" value="C" />Rail&nbsp; <input checked="checked" id="xmodeR" name="xmodeR" type="checkbox" value="R" />Subway</div>
			<div style="position:absolute; top:240px; left:10px; padding:0px; margin:0px; width:229px; height:39px; background-color:transparent; oveflow:hidden; background-image:url(http://tripplanner.mta.info/widget/submitRow.jpg); oveflow:hidden;">&nbsp;</div>
			<div id="alertsDiv" style="position:absolute; top:285px; left:15px; padding:0px; margin:0px; width:230px; height:100px; background-image:url(http://tripplanner.mta.info/widget/abcd.jpg); oveflow:hidden;">&nbsp;</div>
			<div id="waitMsg" style="display: none; position: absolute; top: 290px; left: 20px;
                                    color: red; font-size: 12px; font-weight: bold; background-color:white; width:200px; height:80px; border:solid red 5px; text-align:center;"><br />
				<br />
				Please Wait...</div>
			<div id="fromAutoFillList" style="visibility: hidden; position: absolute; top: 105px;
                                    left: 10px; width: 215px; background-color: blue; overflow: visible;">&nbsp;</div>
			<div id="toAutoFillList" style="visibility: hidden; position: absolute; top: 135px;
                                    left: 10px; width: 215px; height: 20px; background-color: blue; overflow: visible;">&nbsp;</div>
			<div id="tpAlert" style="display: none; padding: 5px; border: solid red 2px; text-align: center;
                                    position: absolute; top: 40px; left: 2px; width: 250px; background-color: white;
                                    font-size: 14px; font-weight: bold;">&nbsp;</div>
		</form>
	</div>
	<form action="http://tripplanner.mta.info/TripplannerRegional/handler/customplannerHandler.ashx?cid=mtahome" method="get" name="tpSubmit" style="display: none" target="_top"><input name="jsonpacket" type="hidden" value="" /></form>
	<div id="map1" style="width: 200px; height: 200px; display: none;">&nbsp;</div>
	<div id="map2" style="width: 200px; height: 200px; display: none;">&nbsp;</div>
	<div id="optionsButton" onclick="GoToTripplaner()" style="cursor:pointer; font-size:2px; position:absolute; top:250px; left:180px; width:15px; height:15px; background-color:transparent;">&nbsp;</div>
	<div id="submitButton" onclick="GoToTPResult()" style="cursor:pointer; font-size:2px; position:absolute; top:250px; left:90px; width:15px; height:15px; background-color:transparent;">&nbsp;</div>
	<div id="helpButton" onclick="showHelpPage()" style="cursor:pointer; font-size:2px; position:absolute; top:250px; left:233px; width:15px; height:15px; background-color:transparent;">&nbsp;</div>
	<div id="serviceChangesButton" onclick="showAdvisoriesPage()" style="cursor:pointer; font-size:2px; position:absolute; top:304px; left:150px; width:15px; height:15px; background-color:transparent;">&nbsp;</div>
</div>
<div id="instructionsDiv" style="position:absolute; top:37px; left:-280px; background-color:white; padding:0px; text-align:left; font-size:12px; font-family:arial;  width:241px; height:334px; overflow:hidden;">
	<div style="height:20px;">
		<table cellpadding="0" cellspacing="0" style="width:241px; background-color:blue; color:white; font-weight:bold; font-size:12px;">
			<tbody>
				<tr>
					<td align="left" id="instructionBackButton" style="visibility:hidden; padding-left:5px;"><span onclick="showInstructionsIndex()" style=" text-decoration:underline; cursor:pointer;">BACK</span></td>
					<td align="right" style="padding-right:5px;"><span onclick="hideInstructionsDiv()" style=" text-decoration:underline; cursor:pointer;">CLOSE</span></td>
				</tr>
			</tbody>
		</table>
	</div>
	<div id="instructionsIndex" style="position:relative; left:4px; font-size:12px; font-family:arial; overflow:auto; height:314px; width:233px; display:inline;"><br />
		You may enter a street address, intersection, or landmark.<br />
		<br />
		<span onclick="showAddressInstructions()" style="text-decoration:underline; color:blue; cursor:pointer; font-weight:bold;">Click Here</span><br />
		for Proper Street Address Format<br />
		<br />
		<span onclick="showIntersectionInstructions()" style="text-decoration:underline; color:blue; cursor:pointer; font-weight:bold;">Click Here</span><br />
		for Proper Intersection Format</div>
	<div id="addressInstructions" style="position:relative; left:4px; overflow:auto; height:314px; width:233px; display:none;">More specific addresses will give better results:<br />
		<br />
		Examples:<br />
		<span style="font-size:10px; font-weight:normal;">2 Broadway<br />
		2 Broadway, New York<br />
		2 Broadway, New York, NY </span></div>
	<div id="intersectionInstructions" style="position:relative; left:4px; overflow:auto; height:314px; width:233px; display:none;">More specific addresses will give better results:<br />
		<br />
		Examples:<br />
		<span style="font-size:10px; font-weight:normal;">East 42nd Street &amp; 5th Ave<br />
		East 42nd Street &amp; 5th Ave, New York<br />
		East 42nd Street &amp; 5th Ave, New York, NY </span></div>
</div>
