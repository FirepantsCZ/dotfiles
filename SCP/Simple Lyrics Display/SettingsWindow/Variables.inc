[Variables]


; Shorthand bangs and abbreviations
A=!ActivateConfig
S=!SetOptionGroup
SO=!SetOption
SV=!SetVariable
U=!UpdateMeasureGroup
UM=!UpdateMeasure
W=!WriteKeyValue

MA=MatchActions
WV=WriteVariableRounded
V=Variables


; Default settings
; UNSET


; Substitute patterns based on the active type of Setting

StateSubstitute="1":"General","2":"Display","3":"Fonts","12":"","5":""
SetHeaderTabNames=[#SO# HeaderTab1 Text "General"][#SO# HeaderTab2 Text "Display"][#SO# HeaderTab3 Text "Text"][#SO# HeaderTab4 Text " "][#SO# HeaderTab5 Text " "]

; Name of variable written to file
; if selain bar -1
Var///1="General":"-1","Display":"SkinHeight","Fonts":"-1"
Var///2="General":"-1","Display":"SkinWidth","Fonts":"FontSize"
Var///3="General":"-1","Display":"SkinPadding","Fonts":"-1"
Var///4="General":"ScrollSpeed","Display":"-1","Fonts":"-1"
Var///5="General":"-1","Display":"BackgroundA","Fonts":"-1"
Var///6="General":"-1","Display":"-1","Fonts":"TextColorA"
Var///7="General":"AutoscrollMult","Display":"AlbumArtA","Fonts":"-1"
Var///8="General":"-1","Display":"-1","Fonts":"-1"
Var///9="General":"-1","Display":"-1","Fonts":"-1"
Var///10="General":"-1","Display":"TheMargin","Fonts":"-1"
Var///11="General":"-1","Display":"-1","Fonts":"-1"
Var///12="General":"-1","Display":"-1","Fonts":"-1"
Var///13="General":"-1","Display":"-1","Fonts":"-1"

; Calc measure MaxValue for Bar meters
CalcMV///1="General":"-1","Display":"1000","Fonts":"-1"
CalcMV///2="General":"-1","Display":"1000","Fonts":"50"
CalcMV///3="General":"-1","Display":"100","Fonts":"-1"
CalcMV///4="General":"50","Display":"-1","Fonts":"-1"
CalcMV///5="General":"-1","Display":"100","Fonts":"-1"
CalcMV///6="General":"-1","Display":"-1","Fonts":"100"
CalcMV///7="General":"200","Display":"100","Fonts":"-1"
CalcMV///8="General":"-1","Display":"-1","Fonts":"-1"
CalcMV///9="General":"-1","Display":"-1","Fonts":"-1"
CalcMV///10="General":"-1","Display":"50","Fonts":"-1"
CalcMV///11="General":"-1","Display":"-1","Fonts":"-1"
CalcMV///12="General":"-1","Display":"-1","Fonts":"-1"
CalcMV///13="General":"-1","Display":"-1","Fonts":"-1"

; LeftMouseDownAction for String meters
; if Bar ga atek
StringLMDA///1="General":'[#A# "#ROOTCONFIG#\SettingsMisc" "LyricHosts.ini"]', "Fonts":''
StringLMDA///2="General":'[#A# "#ROOTCONFIG#\SettingsMisc" "AudioMusicPlayer.ini"]', "Fonts":''
StringLMDA///3="General":'[#W# #V# OnTop "(#OnTop# = 0 ? 1 : 0)" "#@##V#.inc"]', "Fonts":''
StringLMDA///4="Fonts":'[#A# "#ROOTCONFIG#\SettingsMisc" "TextStyles.ini"]'
StringLMDA///5="Fonts":'[#A# "#ROOTCONFIG#\SettingsMisc" "TextEffect.ini"]'
StringLMDA///6="Display":'[#W# #V# AlbumArt "(#AlbumArt# = 0 ? 1 : 0)" "#@##V#.inc"]', "General":'[#W# #V# AutoScroll "(#AutoScroll# = 0 ? 1 : 0)" "#@##V#.inc"]',  "Fonts":''
StringLMDA///7="Fonts":'[#A# "#ROOTCONFIG#\SettingsMisc" "TextAlign.ini"]'
StringLMDA///8=
StringLMDA///9="Display":'[#W# #V# DisableTrackInfo "(#DisableTrackInfo# = 0 ? 1 : 0)" "#@##V#.inc"]'
StringLMDA///10=
StringLMDA///11=
StringLMDA///12="Display":'[#W# #V# DisableTooltip "(#DisableTooltip# = 0 ? 1 : 0)" "#@##V#.inc"]'
StringLMDA///13=

; Display text
; if kosong ""
Text///1="General":"Lyrics Source:","Display":"Height: #SkinHeight# px","Fonts":"Text Font:"
Text///2="General":"Media Player:","Display":"Width: #SkinWidth# px","Fonts":"Text Size: #FontSize# px"
Text///3="General":"#OnTop#on","Display":"Padding: #SkinPadding# px","Fonts":"Text Color:","1on":"🞉 Enabled","0on":"🞅 Disabled"
Text///4="General":"Scroll Speed: #ScrollSpeed#","Display":"Background Color:","Fonts":"Text Style:"
Text///5="General":"","Display":"Background Opacity: #BackgroundA#%","Fonts":"Text Effect:"
Text///6="General":"#AutoScroll#on","Display":"#AlbumArt#on","Fonts":"Text Opacity: #TextColorA#%","1on":"🞉 Enabled","0on":"🞅 Disabled"
Text///7="General":"Auto Scroll Speed: #AutoscrollMult#%","Display":"Album Art Opacity: #AlbumArtA#%","Fonts":"Text Align:"
Text///8="General":"","Display":"","Fonts":""
Text///9="General":"","Display":"#DisableTrackInfo#on","Fonts":"", "1on":"🞅 Disabled","0on":"🞉 Enabled"
Text///10="General":"","Display":"Track Display Margin: #TheMargin# px","Fonts":""
Text///11="General":"","Display":"","Fonts":""
Text///12="General":"","Display":"#DisableTooltip#on","Fonts":"","1on":"🞅 Disabled","0on":"🞉 Enabled"
Text///13="General":"","Display":"","Fonts":""

; Help text
HelpText///1="General":"Source where the lyrics are obtained. Genius still need#CRLF#improvements, but you can give a try","Display":"Height of the lyrics display.","Fonts":"Font face of the lyrics. Click to change.#CRLF#Tip: Use program like Microsoft Word to copy paste the name#CRLF#of the fonts. I can't show the font list due to limitaion."
HelpText///2="General":"Music Player you are using.","Display":"Width of the lyrics display.","Fonts":"Size of the text."
HelpText///3="General":"Keep the lyrics display always on top of the any other windows.","Display":'A gap distance between lyrics and the outer edge of the skin.',"Fonts":"Color of the text. Click on the circle to change it."
HelpText///4="General":"Manual mousewheel scrolling speed.","Display":"Display background color. Click on the circle to change it.","Fonts":"Text styles (Normal, Italic, Bold)."
HelpText///5="General":" ","Display":"Background color visibility.#CRLF#Tip: Set to 1% if you wanna go full-transparency & still able #CRLF#to move the skin","Fonts":"Text effects (None, Shadow, Bordered)."
HelpText///6="General":"Auto scrolling lyrics, thus also disabling the manual scrolling.","Display":"Set Album Art as the base background.#CRLF#Tip: Disable it to increase skin performance.","Fonts":"Text visibility"
HelpText///7="General":"Auto scrolling speed multiplier, 100% means normal.","Display":"Album Art visibility, require to enable above.","Fonts":" "
HelpText///8="General":" ","Display":" ","Fonts":" "
HelpText///9="General":" ","Display":"Show Artist & Title at the bottom of the lyric.","Fonts":" "
HelpText///10="General":" ","Display":"A gap distance between Trackname and the lyrics.","Fonts":" "
HelpText///11="General":" ","Display":" ","Fonts":" "
HelpText///12="General":" ","Display":"Small text on the cursor whenever you mouseover the skin.#CRLF#I made it for first-time user, disable it this thing annoy you :p","Fonts":" "
HelpText///13="General":" ","Display":" ","Fonts":" "


; Rounding options based on the active type of Setting and Section
RoundDisplayWidthHeight=[#SO# #WV# IfCondition2 "((#***Section***# = 2) || (#***Section***# = 3))"][#SO# #WV# IfTrueAction2 """[#SO# WriteVariable Formula "Round([****#WV#****] / 10) * 10"][#SO# WriteVariable OnChangeAction """[#W# #V# [///#****Section****#] [****WriteVariable****] "#@##V#.inc"]"""]"""]
RoundDisplayBands=[#SO# #WV# IfCondition3 "(#***Section***# = 1)"][#SO# #WV# IfTrueAction3 """[#SO# WriteVariable OnChangeAction """[#W# #V# [///#****Section****#] [****WriteVariable****] "#@##V#.inc"]"""]"""]
RoundDisplayFinal=[#SO# #WV# IfCondition4 "(#WV# >= 0)"][#SO# #WV# IfTrueAction4 """[#UM# WriteVariable]"""]

RoundDisplay=#RoundDisplayWidthHeight##RoundDisplayBands##RoundDisplayFinal#


; Extra bangs to modify the Settings window based on the active type of Setting

GeneralBangs=[#SO# "1//" Text "#Current# ▾"][#SO# "1//" LeftMouseUpAction """[!ToggleConfig "#ROOTCONFIG#\SettingsMisc" "LyricHosts.ini"]"""], [#SO# "2//" Text "#PlayerName# ▾"][#SO# "2//" LeftMouseUpAction """[!ToggleConfig "#ROOTCONFIG#\SettingsMisc" "AudioMusicPlayer.ini"]"""], [#SO# "3///" Text "Always On Top:"][#SO# "3///" X 15][#SO# "3" X 15][#SO# "3" LeftMouseUpAction """[#W# #V# OnTop "(#OnTop# = 0 ? 1 : 0)" "#@##V#.inc"][!Refresh]"""][#SO# "//3" X 55r][#SO# "//3" W 90][#SO# "//3" StringAlign Center], [#SO# "6///" Text "Auto Scroll:"][#SO# "6///" X 15][#SO# "6" X 15][#SO# "6" LeftMouseUpAction """[#W# #V# AutoScroll "(#AutoScroll# = 0 ? 1 : 0)" "#@##V#.inc"][!Refresh]"""][#SO# "//6" X 55r][#SO# "//6" W 90][#SO# "//6" StringAlign Center]

DisplayBangs=[#SO# "4" MouseActionCursor 0][#SO# "4/" Shape "Rectangle 0,0,17,17,50 | Fill Color #Background#,#BackgroundA# | StrokeWidth 2 | Stroke Color 0,0,0,75"][#SO# "4/" LeftMouseUpAction """[!WriteKeyValue Variables WriteVariable Background "#@#Variables.inc"][!ActivateConfig "#ROOTCONFIG#\RGBCode"][!Move "(#**CURRENTCONFIGX**# + [#***CURRENTSECTION***#:X])" "(#**CURRENTCONFIGY**# + [#***CURRENTSECTION***#:Y] + 24)" "#ROOTCONFIG#\RGBCode"]"""], [#SO# "6///" Text "Enable Album Art:"][#SO# "6///" X 15][#SO# "6" X 15][#SO# "6" LeftMouseUpAction """[#W# #V# AlbumArt "(#AlbumArt# = 0 ? 1 : 0)" "#@##V#.inc"][!Refresh]"""][#SO# "//6" X 55r][#SO# "//6" W 90][#SO# "//6" StringAlign Center], [#SO# "9///" Text "Display Trackname:"][#SO# "9///" X 15][#SO# "9" X 15][#SO# "9" LeftMouseUpAction """[#W# #V# DisableTrackInfo "(#DisableTrackInfo# = 0 ? 1 : 0)" "#@##V#.inc"][!Refresh]"""][#SO# "//9" X 55r][#SO# "//9" W 90][#SO# "//9" StringAlign Center], [#SO# "12///" Text "Enable Tooltip:"][#SO# "12///" X 15][#SO# "12" X 15][#SO# "12" LeftMouseUpAction """[#W# #V# DisableTooltip "(#DisableTooltip# = 0 ? 1 : 0)" "#@##V#.inc"][!Refresh]"""][#SO# "//12" X 55r][#SO# "//12" W 90][#SO# "//12" StringAlign Center]

FontsBangs=[#SO# "1//" Text "#Font#"][#SO# "1//" LeftMouseUpAction """[!CommandMeasure "1/////" "ExecuteBatch 1-2"]"""][#SO# "3" MouseActionCursor 0][#SO# "3/" Shape "Rectangle 0,0,17,17,50 | Fill Color #TextColor#,#TextColorA# | StrokeWidth 2 | Stroke Color 0,0,0,75"][#SO# "3/" LeftMouseUpAction """[!WriteKeyValue Variables WriteVariable TextColor "#@#Variables.inc"][!ActivateConfig "#ROOTCONFIG#\RGBCode"][!Move "(#**CURRENTCONFIGX**# + [#***CURRENTSECTION***#:X])" "(#**CURRENTCONFIGY**# + [#***CURRENTSECTION***#:Y] + 24)" "#ROOTCONFIG#\RGBCode"]"""], [#SO# "4//" Text "#TextStyle# ▾"][#SO# "4//" LeftMouseUpAction """[!ToggleConfig "#ROOTCONFIG#\SettingsMisc" "TextStyles.ini"]"""], [#SO# "5//" Text "#TextEffect# ▾"][#SO# "5//" LeftMouseUpAction """[!ToggleConfig "#ROOTCONFIG#\SettingsMisc" "TextEffect.ini"]"""], [#SO# "7//" Text "#TextAlign# ▾"][#SO# "7//" LeftMouseUpAction """[!ToggleConfig "#ROOTCONFIG#\SettingsMisc" "TextAlign.ini"]"""]

IfMatchGeneral=[#SO# #MA# IfMatch "General"][#SO# #MA# IfMatchAction """#GeneralBangs#"""]
IfMatchDisplay=[#SO# #MA# IfMatch2 "Display"][#SO# #MA# IfMatchAction2 """#DisplayBangs#"""]
IfMatchFonts=[#SO# #MA# IfMatch3 "Fonts"][#SO# #MA# IfMatchAction3 """#FontsBangs#"""]
SetOptionsByState=[#SO# #MA# String [StateReference]][#UM# #MA#]#IfMatchGeneral##IfMatchDisplay##IfMatchFonts#[#UM# #MA#]
