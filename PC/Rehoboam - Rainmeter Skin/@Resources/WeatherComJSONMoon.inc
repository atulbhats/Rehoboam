; Requires that WeatherComJSONVariables.inc and WeatherComJSONMeasures.inc
; be @Inlcuded in the skin before this file.

; Icons in #@#Images\MoonPhase are:
; New Moon : N.png
; Waning Crescent : WNC.png
; Last Quarter : LQ.png
; Waning Gibbous : WNG.png
; Full Moon : F.png
; Waxing Gibbous : WXG.png
; First Quarter : FQ.png
; Waxing Crescent : WXC.png

; Note that the times for MoonRise and MoonSet are the opposite of SunRise and SunSet
; The moon sets in the morning, and rises at night. Think of it as MoonSet >> MoonRise.

[@MoonParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"vt1dailyForecast":\[{"validDate":"(.*)",.*"moonIcon":"(.*)","moonPhrase":"(.*)","moonrise":"(.*)","moonset":"(.*)",.*{"validDate":"(.*)",.*"moonIcon":"(.*)","moonPhrase":"(.*)","moonrise":"(.*)","moonset":"(.*)",.*{"validDate":"(.*)",.*"moonIcon":"(.*)","moonPhrase":"(.*)","moonrise":"(.*)","moonset":"(.*)",.*{"validDate":"(.*)",.*"moonIcon":"(.*)","moonPhrase":"(.*)","moonrise":"(.*)","moonset":"(.*)",.*{"validDate":"(.*)",.*"moonIcon":"(.*)","moonPhrase":"(.*)","moonrise":"(.*)","moonset":"(.*)",.*{"validDate":"(.*)",.*"moonIcon":"(.*)","moonPhrase":"(.*)","moonrise":"(.*)","moonset":"(.*)",
FinishAction=[!EnableMeasureGroup "Times"]

[@MoonDay1TimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=1
Substitute=#CommonSubstitute#

[@MoonDay1DayLong]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay1TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%A

[@MoonDay1DayShort]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay1TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%a

[@MoonDay1PhaseIcon]
Measure=WebParser
URL=[@MoonParent]
StringIndex=2
Substitute=#CommonSubstitute#

[@MoonDay1PhaseName]
Measure=WebParser
URL=[@MoonParent]
StringIndex=3
Substitute=#CommonSubstitute#

[@MoonDay1RiseTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=4
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay1RiseTime TimeStamp "[*@MoonDay1TimeStamp*]"][!SetOption @MoonDay1RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay1RiseTime TimeStamp "[*@MoonDay1RiseTimeStamp*]"][!SetOption @MoonDay1RiseTime Format "#TimeFormat#"]

[@MoonDay1RiseTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay1SetTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=5
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay1SetTime TimeStamp "[*@MoonDay1TimeStamp*]"][!SetOption @MoonDay1SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay1SetTime TimeStamp "[*@MoonDay1SetTimeStamp*]"][!SetOption @MoonDay1SetTime Format "#TimeFormat#"]

[@MoonDay1SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay1SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay2TimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=6
Substitute=#CommonSubstitute#

[@MoonDay2DayLong]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay2TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%A

[@MoonDay2DayShort]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay2TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%a

[@MoonDay2PhaseIcon]
Measure=WebParser
URL=[@MoonParent]
StringIndex=7
Substitute=#CommonSubstitute#

[@MoonDay2PhaseName]
Measure=WebParser
URL=[@MoonParent]
StringIndex=8
Substitute=#CommonSubstitute#

[@MoonDay2RiseTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=9
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay2RiseTime TimeStamp "[*@MoonDay2TimeStamp*]"][!SetOption @MoonDay2RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay2RiseTime TimeStamp "[*@MoonDay2RiseTimeStamp*]"][!SetOption @MoonDay2RiseTime Format "#TimeFormat#"]

[@MoonDay2RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay2RiseTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay2SetTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=10
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay2SetTime TimeStamp "[*@MoonDay2TimeStamp*]"][!SetOption @MoonDay2SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay2SetTime TimeStamp "[*@MoonDay2SetTimeStamp*]"][!SetOption @MoonDay2SetTime Format "#TimeFormat#"]

[@MoonDay2SetTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay3TimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=11
Substitute=#CommonSubstitute#

[@MoonDay3DayLong]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay3TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%A

[@MoonDay3DayShort]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay3TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%a

[@MoonDay3PhaseIcon]
Measure=WebParser
URL=[@MoonParent]
StringIndex=12
Substitute=#CommonSubstitute#

[@MoonDay3PhaseName]
Measure=WebParser
URL=[@MoonParent]
StringIndex=13
Substitute=#CommonSubstitute#

[@MoonDay3RiseTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=14
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay3RiseTime TimeStamp "[*@MoonDay3TimeStamp*]"][!SetOption @MoonDay3RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay3RiseTime TimeStamp "[*@MoonDay3RiseTimeStamp*]"][!SetOption @MoonDay3RiseTime Format "#TimeFormat#"]

[@MoonDay3RiseTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay3SetTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=15
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay3SetTime TimeStamp "[*@MoonDay3TimeStamp*]"][!SetOption @MoonDay3SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay3SetTime TimeStamp "[*@MoonDay3SetTimeStamp*]"][!SetOption @MoonDay3SetTime Format "#TimeFormat#"]

[@MoonDay3SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay3SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay4TimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=16
Substitute=#CommonSubstitute#

[@MoonDay4DayLong]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay4TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%A

[@MoonDay4DayShort]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay4TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%a

[@MoonDay4PhaseIcon]
Measure=WebParser
URL=[@MoonParent]
StringIndex=17
Substitute=#CommonSubstitute#

[@MoonDay4PhaseName]
Measure=WebParser
URL=[@MoonParent]
StringIndex=18
Substitute=#CommonSubstitute#

[@MoonDay4RiseTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=19
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay4RiseTime TimeStamp "[*@MoonDay4TimeStamp*]"][!SetOption @MoonDay4RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay4RiseTime TimeStamp "[*@MoonDay4RiseTimeStamp*]"][!SetOption @MoonDay4RiseTime Format "#TimeFormat#"]

[@MoonDay4RiseTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay4SetTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=20
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay4SetTime TimeStamp "[*@MoonDay4TimeStamp*]"][!SetOption @MoonDay4SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay4SetTime TimeStamp "[*@MoonDay4SetTimeStamp*]"][!SetOption @MoonDay4SetTime Format "#TimeFormat#"]

[@MoonDay4SetTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay5TimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=21
Substitute=#CommonSubstitute#

[@MoonDay5DayLong]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay5TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%A

[@MoonDay5DayShort]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay5TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%a

[@MoonDay5PhaseIcon]
Measure=WebParser
URL=[@MoonParent]
StringIndex=22
Substitute=#CommonSubstitute#

[@MoonDay5PhaseName]
Measure=WebParser
URL=[@MoonParent]
StringIndex=23
Substitute=#CommonSubstitute#

[@MoonDay5RiseTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=24
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay5RiseTime TimeStamp "[*@MoonDay5TimeStamp*]"][!SetOption @MoonDay5RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay5RiseTime TimeStamp "[*@MoonDay5RiseTimeStamp*]"][!SetOption @MoonDay5RiseTime Format "#TimeFormat#"]

[@MoonDay5RiseTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay5SetTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=25
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay5SetTime TimeStamp "[*@MoonDay5TimeStamp*]"][!SetOption @MoonDay5SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay5SetTime TimeStamp "[*@MoonDay5SetTimeStamp*]"][!SetOption @MoonDay5SetTime Format "#TimeFormat#"]

[@MoonDay5SetTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay6TimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=26
Substitute=#CommonSubstitute#

[@MoonDay6DayLong]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay6TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%A

[@MoonDay6DayShort]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay6TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%a

[@MoonDay6PhaseIcon]
Measure=WebParser
URL=[@MoonParent]
StringIndex=27
Substitute=#CommonSubstitute#

[@MoonDay6PhaseName]
Measure=WebParser
URL=[@MoonParent]
StringIndex=28
Substitute=#CommonSubstitute#

[@MoonDay6RiseTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=29
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay6RiseTime TimeStamp "[*@MoonDay6TimeStamp*]"][!SetOption @MoonDay6RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay6RiseTime TimeStamp "[*@MoonDay6RiseTimeStamp*]"][!SetOption @MoonDay6RiseTime Format "#TimeFormat#"]

[@MoonDay6RiseTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@MoonDay6SetTimeStamp]
Measure=WebParser
URL=[@MoonParent]
StringIndex=30
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay6SetTime TimeStamp "[*@MoonDay6TimeStamp*]"][!SetOption @MoonDay6SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay6SetTime TimeStamp "[*@MoonDay6SetTimeStamp*]"][!SetOption @MoonDay6SetTime Format "#TimeFormat#"]0"]

[@MoonDay6SetTime]
Measure=Time
Group=Times
Disabled=1
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

