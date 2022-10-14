\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"

		R1*16  |
		r2 r4 r8 e  |
		a 8. a b 8 c' 4. a 8  |
		b 2 e  |
%% 20
		f 4. g 8 a 8. g f 8  |
		e 2 e  |
		r4 d 8 e f 8. e d 8  |
		e 2 a  |
		r2 a 4 c'  |
%% 25
		e' 1 ~  |
		e' 2 r4 r8 a  |
		c' 8. c' d' 8 e' 4. c' 8  |
		d' 2 b  |
		r4 c' 8 c' c' 8. c' c' 8  |
%% 30
		c' 2 c' 4 ( b
		a 2 ) r8. c' b 8  |
		a 2 a  |
		r2 a 4 c'  |
		e' 4 ( d' c' b 8 ) a  |
%% 35
		c' 8. c' d' 8 e' 4. c' 8  |
		d' 2 b  |
		R1  |
		r4 c' 8 c' c' 8. a c' 8  |
		d' 8. c' ~ c' 8 ~ c' 2  |
%% 40
		r4 c' a c'  |
		a 4. r8 c' 8. c' c' 8  |
		c' 1  |
		R1  |
		r4 c' a c'  |
%% 45
		a 4. r8 c' 8. c' c' 8  |
		e' 1 ~  |
		e' 2 r  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-tenor" {
		Cor -- de -- ro de Dios que qui -- tas
		el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros,
		ten pie -- dad.

		Cor -- de -- ro de Dios que qui -- tas
		el pe -- ca -- do del mun -- do, __
		"...de" no -- so -- tros,
		ten pie -- dad. __

		Cor -- de -- ro de Dios que qui -- tas
		el pe -- ca -- do del mun -- do,
		da -- nos la paz, __ da -- nos la paz.
		da -- nos la paz, __ da -- nos la paz.

	}
>>
