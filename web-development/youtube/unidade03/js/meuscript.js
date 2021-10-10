$(document).ready(function() {
    $.get("https://www.googleapis.com/youtube/v3/videos", {
            part: 'statistics',
            id: '7Nd7JAU04o8',
            key: 'AIzaSyDHdyOFGtHtRK5Ub1L9F_CWXJ6ZngvEs7I'},
            function(data) {
                console.log(data);
            }
    )
});