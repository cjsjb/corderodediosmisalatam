\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		R1*16  |
		r2 r4 r8 e'  |
		a' 8. a' b' 8 c'' 4. a' 8  |
		b' 2 e'  |
%% 20

		f' 4. g' 8 \times 2/3 { a' 4 g' f' }  |
		e' 2 e'  |
		r4 d' 8 e' \times 2/3 { f' 4 e' d' }  |
		e' 2 a'  |
		r2 f' 4 a'  |
%% 25
		gis' 1 ~  |
		gis' 2 r4 r8 e'  |
		a' 8. a' a' 8 a' 4. a' 8  |
		g' 4 ( b ) d' ( g'
		% warning: overlong bar truncated here |
		f' 2.. ) f' 8  |
%% 30
		e' 2 e'  |
		r4 d' 8 d' \times 2/3 { d' 4 c' b }  |
		c' 2 e' (
		% warning: overlong bar truncated here |
		f' 4. ) r8 f' 4 a'  |
		gis' 2. r8 e'  |
%% 35
		a' 8. a' a' 8 a' 4. a' 8  |
		g' 4 ( b ) d' ( g'
		% warning: overlong bar truncated here |
		%f' 2. ~ f' 8 ) f'  |
		f' 2.. ) f' 8  |
		e' 2 e'  |
		r2 \times 2/3 { d' 4 c' b }  |
%% 40
		c' 2 ( e'
		% warning: overlong bar truncated here |
		f' 4. ) r8 r2  |
		r4 a c' c' 8 ( e' )  |
		f' 2 \times 2/3 { f' 4 f' f' }  |
		e' 2 ( c'
		% warning: overlong bar truncated here |
%% 45
		\times 2/3 { d' 4 c' 2 ) } \times 2/3 { c' 4 c' c' }  |
		c' 1 ~  |
		c' 2 r  |
		\bar "|."
	}

	\lyricsto "voz-mezzosoprano" \new Lyrics \lyricmode {
		Cor -- de -- ro de Dios que qui -- tas
		el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros,
		ten pie -- dad.

		Cor -- de -- ro de Dios que qui __ tas... __
		del mun -- do,
		ten pie -- dad de no -- so -- tros, __
		ten pie -- dad.

		Cor -- de -- ro de Dios que qui __ tas... __
		del mun -- do,
		da -- nos la paz, __ da -- nos la paz.
		da -- nos la paz, __ da -- nos la paz.

	}
>>
