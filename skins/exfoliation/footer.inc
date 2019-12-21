## exfoliation for weewx - Copyright 2012-2013 Matthew Wall
## $Id: footer.inc 1710 2017-08-21 02:15:56Z mwall $

<div class='footer'>
  <p>
#if $Extras.has_key('station_subtitle')
    $Extras.station_subtitle<br/>
#end if
    weewx: $station.uptime<br/>
    server: $station.os_uptime<br/>
    weewx $station.version with $station.hardware and exfoliation $Extras.version<br/>
  </p>
</div>

## Include the Google Analytics code if there is an ID available:
#if $Extras.has_key('googleAnalyticsId')
<script type="text/javascript">
  var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl." : "http://www.");
  document.write(unescape("%3Cscript src='" + gaJsHost + "google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
</script>
<script type="text/javascript">
  try{
  var pageTracker = _gat._getTracker("$Extras.googleAnalyticsId");
  pageTracker._trackPageview();
  } catch(err) {}
</script>
#end if
