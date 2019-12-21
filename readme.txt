This is the skin exfoliation for the weewx weather system.
Copyright 2012-2017 Matthew Wall

Installation instructions:

1) run the installer:

wee_extension --install weewx-exfoliation.tgz

2) restart weewx:

sudo /etc/init.d/weewx stop
sudo /etc/init.d/weewx start

3) look at the result in the 'exfoliation' subdirectory, nominally

public_html/exfoliation


Configuration options:

The links page includes forecasts, satellite and radar images.  Look at the
Extras section of the skin.conf file, then override any URLs with those
appropriate for your location.  You can do the overrides in your weewx.conf,
or modify the skin.conf file itself.

The forecast page requires the forecast extension.  In particular, the
forecast variables search list extension must be enabled in the generator
like this in skin.conf:

[CheetahGenerator]
    search_list_extensions = user.forecast.ForecastVariables


Credits:

Icons in the aw set were derived from Adam Whitcroft's climacons.
Icons in the wu set were derived from images at Weather Underground.
