		$(document).ready(function(){
			SetTimeMyTrip();
			$("body").mouseup(function() {
				$("#fromAutoFillList").css('visibility', 'hidden');
				$("#toAutoFillList").css('visibility', 'hidden');
			});
			
			/* For date control in Trip Planner */
			$("#fdate").datepick({ showDefault: true });
			$("#f511link").hover(
				function() {
					$("#f511tip").css('display', 'block');
				},
				function() {
					$("#f511tip").css('display', 'none');
				});
			$("#triplink").hover(
				function() {
					$("#triptip").css('display', 'block');
				},
				function() {
					$("#triptip").css('display', 'none');
				});

		});