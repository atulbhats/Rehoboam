[Variables]

; Getting and setting your LocationCode can be done one of several ways.
; 
; Go to https://weather.com/
; Search for your city by name.
; Use the long number at the end of the resulting URL, for example:
; https://weather.com/weather/today/l/1665d9e3052c3448be48dafc1587318a27ee85516e97e0b5376043cd41a4f0e8
; The LocationCode would be 1665d9e3052c3448be48dafc1587318a27ee85516e97e0b5376043cd41a4f0e8

; Copy and enter that as the value for the LocationCode.
; LocationCode=1665d9e3052c3448be48dafc1587318a27ee85516e97e0b5376043cd41a4f0e8
  LocationCode=38533fd1fc0e79b256bebe8147dfdb08033a6c0c68af87b0e91bb823e30ab133
;
; You can also use the LocationCode used in earlier skins using wxdata as the source. This can be 
; found at https://weather.codes/
; While it's not clear that this is any more exact than any other approach, it does have the 
; advantage of allowing a very specific "display name".
; LocationCode=USVA0944
;
; You can also use your Latitude,Longitude retrieved from https://google.com/maps in this format:
; LocationCode=38.7230934,-77.0690415
; LocationCode=12.9229829,74.7820231

; Alternatively, in the USA, you can simply use your ZipCode as the LocationCode.
; LocationCode=22308
  

;LocationCode=USAL0332

; If another language or unit(s) of measures are desired, simply go to https://weather.com/
; Using the controls at the top of the page, set your country and units of measure as desired.
; Copy and enter the Language from the resulting URL.

; For example, French would be Language=fr-FR
; The unit(s) of measure are automatic, based on the language.
; For instance, you cannot have the language be French, but the units be F imperial.

; Note however, that simply changing from imperial F to metric C units of measure while keeping the 
; langage as English can be done by using en-GB as the Language.
 
Language=en-GB

; How often to update the weather information. Default is 600 or 10 minutes.

UpdateRate=600

; Date and time formats you desire.
; See https://docs.rainmeter.net/manual/measures/time/#FormatCodes 
; For formatting codes to use.

DateFormat=%A, %B %#d, %Y
TimeFormat=%#I:%M %p

; Don't change any below here.

CommonSubstitute='"':"","^null$":"","\\u002F":"/","\\u005C":"\","\\u003C":"<","\\u003E":">"
URLSite=https://weather.com/#Language#/weather/today/l/#LocationCode#
