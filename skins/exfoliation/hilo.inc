## exfoliation for weewx - Copyright 2012-2013 Matthew Wall
## $Id: hilo.inc 1751 2017-10-10 03:10:18Z mwall $

<!-- hi/lo readings in tabular form -->

<table class='metrics'>
  <tr>
    <td></td>
    <td class="metric_title">Today</td>
    <td class="metric_title">Month</td>
    <td class="metric_title">Year</td>
#if $varExists('alltime')
    <td class="metric_title">All</td>
#end if
    <td></td>
  </tr>

  <!-- outside -->

  <tr>
    <td class="metric_name">High Temperature:</td>
    <td><span class="metric_value">$day.outTemp.max.formatted</span><br>
      <span class="hilo_time">$day.outTemp.maxtime</span></td>
    <td><span class="metric_value">$month.outTemp.max.formatted</span><br>
      <span class="hilo_time">$month.outTemp.maxtime</span></td>
    <td><span class="metric_value">$year.outTemp.max.formatted</span><br>
      <span class="hilo_time">$year.outTemp.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.outTemp.max.formatted</span><br>
      <span class="hilo_time">$alltime.outTemp.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.outTemp</td>
  </tr>
  <tr>
    <td class="metric_name">Low Temperature:</td>
    <td><span class="metric_value">$day.outTemp.min.formatted</span><br>
      <span class="hilo_time">$day.outTemp.mintime</span></td>
    <td><span class="metric_value">$month.outTemp.min.formatted</span><br>
      <span class="hilo_time">$month.outTemp.mintime</span></td>
    <td><span class="metric_value">$year.outTemp.min.formatted</span><br>
      <span class="hilo_time">$year.outTemp.mintime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.outTemp.min.formatted</span><br>
      <span class="hilo_time">$alltime.outTemp.mintime</span></td>
#end if
    <td class="metric_units">$unit.label.outTemp</td>
  </tr>
  <tr>
    <td class="metric_name">High Humidity:</td>
    <td><span class="metric_value">$day.outHumidity.max.formatted</span><br>
      <span class="hilo_time">$day.outHumidity.maxtime</span></td>
    <td><span class="metric_value">$month.outHumidity.max.formatted</span><br>
      <span class="hilo_time">$month.outHumidity.maxtime</span></td>
    <td><span class="metric_value">$year.outHumidity.max.formatted</span><br>
      <span class="hilo_time">$year.outHumidity.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.outHumidity.max.formatted</span><br>
      <span class="hilo_time">$alltime.outHumidity.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.outHumidity</td>
  </tr>
  <tr>
    <td class="metric_name">Low Humidity:</td>
    <td><span class="metric_value">$day.outHumidity.min.formatted</span><br>
      <span class="hilo_time">$day.outHumidity.mintime</span></td>
    <td><span class="metric_value">$month.outHumidity.min.formatted</span><br>
      <span class="hilo_time">$month.outHumidity.mintime</span></td>
    <td><span class="metric_value">$year.outHumidity.min.formatted</span><br>
      <span class="hilo_time">$year.outHumidity.mintime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.outHumidity.min.formatted</span><br>
      <span class="hilo_time">$alltime.outHumidity.mintime</span></td>
#end if
    <td class="metric_units">$unit.label.outHumidity</td>
  </tr>
  <tr>
    <td class="metric_name">High Dewpoint:</td>
    <td><span class="metric_value">$day.dewpoint.max.formatted</span><br>
      <span class="hilo_time">$day.dewpoint.maxtime</span></td>
    <td><span class="metric_value">$month.dewpoint.max.formatted</span><br>
      <span class="hilo_time">$month.dewpoint.maxtime</span></td>
    <td><span class="metric_value">$year.dewpoint.max.formatted</span><br>
      <span class="hilo_time">$year.dewpoint.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.dewpoint.max.formatted</span><br>
      <span class="hilo_time">$alltime.dewpoint.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.dewpoint</td>
  </tr>
  <tr>
    <td class="metric_name">Low Dewpoint:</td>
    <td><span class="metric_value">$day.dewpoint.min.formatted</span><br>
      <span class="hilo_time">$day.dewpoint.mintime</span></td>
    <td><span class="metric_value">$month.dewpoint.min.formatted</span><br>
      <span class="hilo_time">$month.dewpoint.mintime</span></td>
    <td><span class="metric_value">$year.dewpoint.min.formatted</span><br>
      <span class="hilo_time">$year.dewpoint.mintime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.dewpoint.min.formatted</span><br>
      <span class="hilo_time">$alltime.dewpoint.mintime</span></td>
#end if
    <td class="metric_units">$unit.label.dewpoint</td>
  </tr>
  <tr>
    <td class="metric_name">High Barometer:</td>
    <td><span class="metric_value">$day.barometer.max.formatted</span><br>
      <span class="hilo_time">$day.barometer.maxtime</span></td>
    <td><span class="metric_value">$month.barometer.max.formatted</span><br>
      <span class="hilo_time">$month.barometer.maxtime</span></td>
    <td><span class="metric_value">$year.barometer.max.formatted</span><br>
      <span class="hilo_time">$year.barometer.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.barometer.max.formatted</span><br>
      <span class="hilo_time">$alltime.barometer.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.barometer</td>
  </tr>
  <tr>
    <td class="metric_name">Low Barometer:</td>
    <td><span class="metric_value">$day.barometer.min.formatted</span><br>
      <span class="hilo_time">$day.barometer.mintime</span></td>
    <td><span class="metric_value">$month.barometer.min.formatted</span><br>
      <span class="hilo_time">$month.barometer.mintime</span></td>
    <td><span class="metric_value">$year.barometer.min.formatted</span><br>
      <span class="hilo_time">$year.barometer.mintime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.barometer.min.formatted</span><br>
      <span class="hilo_time">$alltime.barometer.mintime</span></td>
#end if
    <td class="metric_units">$unit.label.barometer</td>
  </tr>
  <tr>
    <td class="metric_name">High Heat Index:</td>
    <td><span class="metric_value">$day.heatindex.max.formatted</span><br>
      <span class="hilo_time">$day.heatindex.maxtime</span></td>
    <td><span class="metric_value">$month.heatindex.max.formatted</span><br>
      <span class="hilo_time">$month.heatindex.maxtime</span></td>
    <td><span class="metric_value">$year.heatindex.max.formatted</span><br>
      <span class="hilo_time">$year.heatindex.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.heatindex.max.formatted</span><br>
      <span class="hilo_time">$alltime.heatindex.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.heatindex</td>
  </tr>
  <tr>
    <td class="metric_name">Low Wind Chill:</td>
    <td><span class="metric_value">$day.windchill.min.formatted</span><br>
      <span class="hilo_time">$day.windchill.mintime</span></td>
    <td><span class="metric_value">$month.windchill.min.formatted</span><br>
      <span class="hilo_time">$month.windchill.mintime</span></td>
    <td><span class="metric_value">$year.windchill.min.formatted</span><br>
      <span class="hilo_time">$year.windchill.mintime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.windchill.min.formatted</span><br>
      <span class="hilo_time">$alltime.windchill.mintime</span></td>
#end if
    <td class="metric_units">$unit.label.windchill</td>
  </tr>
  <tr>
    <td class="metric_name">High Wind Speed:</td>
    <td><span class="metric_value">$day.wind.max.formatted</span><br>
      <span class="hilo_time">$day.wind.maxtime</span></td>
    <td><span class="metric_value">$month.wind.max.formatted</span><br>
      <span class="hilo_time">$month.wind.maxtime</span></td>
    <td><span class="metric_value">$year.wind.max.formatted</span><br>
      <span class="hilo_time">$year.wind.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.wind.max.formatted</span><br>
      <span class="hilo_time">$alltime.wind.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.wind</td>
  </tr>
  <tr>
    <td class="metric_name">Ave Wind Speed:</td>
    <td><span class="metric_value">$day.wind.avg.formatted</span></td>
    <td><span class="metric_value">$month.wind.avg.formatted</span></td>
    <td><span class="metric_value">$year.wind.avg.formatted</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.wind.avg.formatted</span></td>
#end if
    <td class="metric_units">$unit.label.wind</td>
  </tr>
  <tr>
    <td class="metric_name">High Rain Rate:</td>
    <td><span class="metric_value">$day.rainRate.max.formatted</span><br>
      <span class="hilo_time">$day.rainRate.maxtime</span></td>
    <td><span class="metric_value">$month.rainRate.max.formatted</span><br>
      <span class="hilo_time">$month.rainRate.maxtime</span></td>
    <td><span class="metric_value">$year.rainRate.max.formatted</span><br>
      <span class="hilo_time">$year.rainRate.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.rainRate.max.formatted</span><br>
      <span class="hilo_time">$alltime.rainRate.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.rainRate</td>
  </tr>
  <tr>
    <td class="metric_name">Rain Total:</td>
    <td><span class="metric_value">$day.rain.sum.formatted</span><br></td>
    <td><span class="metric_value">$month.rain.sum.formatted</span></td>
    <td><span class="metric_value">$year.rain.sum.formatted</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.rain.sum.formatted</span></td>
#end if
    <td class="metric_units">$unit.label.rain</td>
  </tr>

#if $Extras.has_key('current_show_inside') and $Extras.current_show_inside == 'true'
  <!-- inside -->

  <tr><td>&nbsp;</td></tr>
  <tr><td colspan='5' class='metric_name'>Inside</td></tr>

  <tr>
    <td class="metric_name">High Temperature:</td>
    <td><span class="metric_value">$day.inTemp.max.formatted</span><br>
      <span class="hilo_time">$day.inTemp.maxtime</span></td>
    <td><span class="metric_value">$month.inTemp.max.formatted</span><br>
      <span class="hilo_time">$month.inTemp.maxtime</span></td>
    <td><span class="metric_value">$year.inTemp.max.formatted</span><br>
      <span class="hilo_time">$year.inTemp.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.inTemp.max.formatted</span><br>
      <span class="hilo_time">$alltime.inTemp.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.inTemp</td>
  </tr>
  <tr>
    <td class="metric_name">Low Temperature:</td>
    <td><span class="metric_value">$day.inTemp.min.formatted</span><br>
      <span class="hilo_time">$day.inTemp.mintime</span></td>
    <td><span class="metric_value">$month.inTemp.min.formatted</span><br>
      <span class="hilo_time">$month.inTemp.mintime</span></td>
    <td><span class="metric_value">$year.inTemp.min.formatted</span><br>
      <span class="hilo_time">$year.inTemp.mintime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.inTemp.min.formatted</span><br>
      <span class="hilo_time">$alltime.inTemp.mintime</span></td>
#end if
    <td class="metric_units">$unit.label.inTemp</td>
  </tr>
  <tr>
    <td class="metric_name">High Humidity:</td>
    <td><span class="metric_value">$day.inHumidity.max.formatted</span><br>
      <span class="hilo_time">$day.inHumidity.maxtime</span></td>
    <td><span class="metric_value">$month.inHumidity.max.formatted</span><br>
      <span class="hilo_time">$month.inHumidity.maxtime</span></td>
    <td><span class="metric_value">$year.inHumidity.max.formatted</span><br>
      <span class="hilo_time">$year.inHumidity.maxtime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.inHumidity.max.formatted</span><br>
      <span class="hilo_time">$alltime.inHumidity.maxtime</span></td>
#end if
    <td class="metric_units">$unit.label.inHumidity</td>
  </tr>
  <tr>
    <td class="metric_name">Low Humidity:</td>
    <td><span class="metric_value">$day.inHumidity.min.formatted</span><br>
      <span class="hilo_time">$day.inHumidity.mintime</span></td>
    <td><span class="metric_value">$month.inHumidity.min.formatted</span><br>
      <span class="hilo_time">$month.inHumidity.mintime</span></td>
    <td><span class="metric_value">$year.inHumidity.min.formatted</span><br>
      <span class="hilo_time">$year.inHumidity.mintime</span></td>
#if $varExists('alltime')
    <td><span class="metric_value">$alltime.inHumidity.min.formatted</span><br>
      <span class="hilo_time">$alltime.inHumidity.mintime</span></td>
#end if
    <td class="metric_units">$unit.label.inHumidity</td>
  </tr>

#end if

</table>
