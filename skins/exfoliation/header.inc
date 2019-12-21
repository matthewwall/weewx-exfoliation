## exfoliation for weewx - Copyright 2012-2013 Matthew Wall
## $Id: header.inc 1751 2017-10-10 03:10:18Z mwall $

<div class='header'>
  
  <div id='station_info'>
    <span class='station_title'>$station.location</span><br/>
    <span class='station_time'>$current.dateTime</span>
  </div>
  
  <div class='navigation_controls'>
    <a href='.'>Current</a>
#if $Extras.has_key('show_forecast_page') and $Extras.show_forecast_page == 'true'
    <a href='forecast.html'>Forecast</a>
#end if
#if $Extras.has_key('show_history_page') and $Extras.show_history_page == 'true'
    <a href='history.html'>History</a>
#end if
#if $Extras.has_key('show_almanac_page') and $Extras.show_almanac_page == 'true'
    <a href='almanac.html'>Almanac</a>
#end if
#if $Extras.has_key('show_station_page') and $Extras.show_station_page == 'true'
    <a href='station.html'>Station</a>
#end if
#if $Extras.has_key('show_links_page') and $Extras.show_links_page == 'true'
    <a href='links.html'>Links</a>
#end if
  </div>
  
</div>
