$.getJSON("https://swapi-api.hbtn.io/api/films/?format=json", function(data) {
	$( data.results ).each( function( i )
	{ $( "#list_movies" ).prepend("<li>" + this['title'] + "</li>")
});
});


