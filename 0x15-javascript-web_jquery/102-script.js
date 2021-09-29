$(document).ready(function(){
	$("INPUT#btn_translate").click(function(){
		$.getJSON("https://www.fourtonfish.com/hellosalut/hello/", function(data) {
			$( "DIV#hello" ).html(data.hello)
		});
	})
	
	
	
	})