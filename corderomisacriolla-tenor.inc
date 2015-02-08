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
		f 4. g 8 \times 2/3 { a 4 g f }  |
		e 2 e  |
		r4 d 8 e \times 2/3 { f 4 e d }  |
		e 2 a  |
		r2 a 4 c'  |
%% 25
		e' 1 ~  |
		e' 2 r4 r8 a  |
		c' 8. c' d' 8 e' 4. c' 8  |
		d' 2 b  |
		r4 c' 8 c' \times 2/3 { c' 4 c' c' }  |
%% 30
		c' 2 c' 4 ( b
		% warning: overlong bar truncated here |
		a 2 ) \times 2/3 { r4 c' b }  |
		a 2 a  |
		r2 a 4 c'  |
		e' 4 ( d' c' b 8 ) a  |
%% 35
		c' 8. c' d' 8 e' 4. c' 8  |
		d' 2 b  |
		R1  |
		r4 c' 8 c' \times 2/3 { c' 4 a c' }  |
		\times 2/3 { d' 4 c' 2 ~ } c'  |
%% 40
		r4 c' a c'  |
		a 4. r8 \times 2/3 { c' 4 c' c' }  |
		c' 1  |
		R1  |
		r4 c' a c'  |
%% 45
		a 4. r8 \times 2/3 { c' 4 c' c' }  |
		e' 1 ~  |
		e' 2 r  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
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
