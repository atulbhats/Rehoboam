; Requires that WeatherComJSONVariables.inc and WeatherComJSONMeasures.inc
; be @Inlcuded in the skin before this file.

; Pollen is returned for today and forecasted for 3 days for "tree", "grass", "weed"
; individually as numbers from 0 (no report) to 1 (low) up to 5 (very high)

[@PollenParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"vt1pollenforecast":\[{"reportDate":"(.*)",".*":(.*),".*":(.*),".*":(.*)},{"reportDate":"(.*)",".*":(.*),".*":(.*),".*":(.*)},{"reportDate":"(.*)",".*":(.*),".*":(.*),".*":(.*)},{"reportDate":"(.*)",".*":(.*),".*":(.*),".*":(.*)}
FinishAction=[!EnableMeasureGroup "Times"]

[@PollenDay1TimeStamp]
Measure=WebParser
URL=[@PollenParent]
StringIndex=1
Substitute=#CommonSubstitute#

[@PollenDay1Date]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@PollenDay1TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#DateFormat#

[@PollenDay1Time]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@PollenDay1TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@PollenDay1Tree]
Measure=WebParser
URL=[@PollenParent]
StringIndex=2
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay1Grass]
Measure=WebParser
URL=[@PollenParent]
StringIndex=3
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay1Weed]
Measure=WebParser
URL=[@PollenParent]
StringIndex=4
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay2TimeStamp]
Measure=WebParser
URL=[@PollenParent]
StringIndex=5
Substitute=#CommonSubstitute#

[@PollenDay2Date]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@PollenDay2TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#DateFormat#

[@PollenDay2Time]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@PollenDay2TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@PollenDay2Tree]
Measure=WebParser
URL=[@PollenParent]
StringIndex=6
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay2Grass]
Measure=WebParser
URL=[@PollenParent]
StringIndex=7
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay2Weed]
Measure=WebParser
URL=[@PollenParent]
StringIndex=8
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay3TimeStamp]
Measure=WebParser
URL=[@PollenParent]
StringIndex=9
Substitute=#CommonSubstitute#

[@PollenDay3Date]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@PollenDay3TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#DateFormat#

[@PollenDay3Time]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@PollenDay3TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@PollenDay3Tree]
Measure=WebParser
URL=[@PollenParent]
StringIndex=10
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay3Grass]
Measure=WebParser
URL=[@PollenParent]
StringIndex=11
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay3Weed]
Measure=WebParser
URL=[@PollenParent]
StringIndex=12
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay4TimeStamp]
Measure=WebParser
URL=[@PollenParent]
StringIndex=13
Substitute=#CommonSubstitute#

[@PollenDay4Date]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@PollenDay4TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#DateFormat#

[@PollenDay4Time]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@PollenDay4TimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

[@PollenDay4Tree]
Measure=WebParser
URL=[@PollenParent]
StringIndex=14
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay4Grass]
Measure=WebParser
URL=[@PollenParent]
StringIndex=15
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

[@PollenDay4Weed]
Measure=WebParser
URL=[@PollenParent]
StringIndex=16
MinValue=0
MaxValue=5
Substitute=#CommonSubstitute#

