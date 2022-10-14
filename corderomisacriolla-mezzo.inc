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
		f' 4. g' 8 a' 8. g' f' 8  |
		e' 2 e'  |
		r4 d' 8 e' f' 8. e' d' 8  |
		e' 2 a'  |
		r2 f' 4 a'  |
%% 25
		gis' 1 ~  |
		gis' 2 r4 r8 e'  |
		a' 8. a' a' 8 a' 4. a' 8  |
		g' 4 ( b ) d' ( g'
		f' 2. ~ f' 8 ) f'  |
%% 30
		e' 2 e'  |
		r4 d' 8 d' d' 8. c' b 8  |
		c' 2 e' (
		f' 4. ) r8 f' 4 a'  |
		gis' 2. r8 e'  |
%% 35
		a' 8. a' a' 8 a' 4. a' 8  |
		g' 4 ( b ) d' ( g'
		f' 2. ~ f' 8 ) f'  |
		e' 2 e'  |
		r2 d' 8. c' b 8  |
%% 40
		c' 2 ( e'
		f' 4. ) r8 r2  |
		r4 a c' c' 8 ( e' )  |
		f' 2 f' 8. f' f' 8  |
		e' 2 ( c'
%% 45
		d' 8. c' ~ c' 8 ) c' 8. c' c' 8  |
		c' 1 ~  |
		c' 2 r  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzosoprano" {
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
