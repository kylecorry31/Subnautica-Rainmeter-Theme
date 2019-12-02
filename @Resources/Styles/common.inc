[roundlineCommon]
Solid=1
AntiAlias=1
StartAngle=#pieStart#
RotationAngle=(6.28*#pieSize#)

[innerEdgeCommon]
W=(2*#radius#)
H=(2*#radius#)
LineStart=#innerRadius#*0.96
LineLength=(#innerRadius#*1.07)
LineColor=#innerRingColor#
Hidden=#hideInnerEdge#

[outerEdgeCommon]
X=r
Y=r
W=(2*#radius#)
H=(2*#radius#)
LineStart=(#radius#*0.96)
LineLength=#radius#
LineColor=#outerRingColor#
Hidden=#hideOuterEdge#

[pieBgCommon]
Meter=Shape
Shape=Ellipse (5*#radius#+#edging#),(#radius#+#edging#),#radius# | Fill RadialGradient MyGradient1
MyGradient1=0,0 | 40,80,90,200 ; 0.0 | 40,80,90,200 ; 0.75 | 105,190,190,200 ; 0.95 | 105,190,190,200 ; 1.0

[innerCircle]
Meter=Shape
Hidden=#hideInnerCircle#
Shape=Ellipse (5*#radius#+#edging#),(#radius#+#edging#),(#innerRadius#*1.07) | Fill RadialGradient MyGradient2 | StrokeColor 130,180,170,255
MyGradient2=0,0 | 65,120,130,255 ; 0.0 | 55,80,100,255 ; 0.94 | 0,0,0,255 ; 0.945 | 130,180,170,255 ; 0.95 | 130,180,170,255 ; 1.0

[pieCommon]
X=r
Y=r
W=(2*#radius#)
H=(2*#radius#)
LineLength=(#radius#*0.91)
LineStart=(#innerRadius#*1.14)
LineColor=#pieColor#

[dividerCommon]
Y=#radius#r
W=0
H=0
SolidColor=#outerRingColor#
Hidden=#hideDivider#

[mainTextCommon]
AntiAlias=1
StringCase=Lower
FontFace=#mainFont#
FontSize=(#radius#*0.22)
FontColor=#textMainColor#
StringStyle=#fontStyle#
SolidColor=0,0,0,1

[subTextCommon]
AntiAlias=1
ClipStringW=(#radius#*4)
ClipStringH=(#subTwoLines# = 1 ? (#radius#) : (#radius#*0.5))
ClipString=2
FontFace=#subFont#
FontSize=(#radius#*0.35)
FontColor=#textSubColor#
StringStyle=#fontStyle#
Hidden=#hideSubText#

[iconCommon]
AntiAlias=1
Y=r
W=(#radius#*0.5)
PreserveAspectRatio=1
ImageTint=#textSubColor#
Path="#@#Images"
Hidden=1
Group=buttons