$(function(){
	if ($("header").hasClass("green")) {
		$("#toggle_header").click(function() {$( "header" ).removeClass( "green" ).addClass( "red" );});
	}
	else {
		$("#toggle_header").click(function() {$( "header" ).removeClass( "red" ).addClass( "green" );});
	}
	});