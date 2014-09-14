\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
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
		r2 a' 4 c''  |
%% 25
		b' 1 ~  |
		b' 2 r4 r8 e'  |
		a' 8. a' b' 8 c'' 4. a' 8  |
		b' 2 e'  |
		r4 f' 8 g' \times 2/3 { a' 4 g' f' }  |
%% 30
		e' 2 e'  |
		r4 d' 8 e' \times 2/3 { f' 4 e' d' }  |
		e' 2 a'  |
		r2 a' 4 c''  |
		b' 2. r8 e'  |
%% 35
		a' 8. a' b' 8 c'' 4. a' 8  |
		b' 2 e'  |
		r4 f' 8 g' \times 2/3 { a' 4 g' f' }  |
		e' 2 e'  |
		r2 \times 2/3 { a' 4 a' a' }  |
%% 40
		a' 2 ( e'
		% warning: overlong bar truncated here |
		f' 4 ) r \times 2/3 { a' a' a' }  |
		a' 2 r  |
		r2 \times 2/3 { a' 4 a' a' }  |
		a' 2 ( e'
		% warning: overlong bar truncated here |
%% 45
		f' 4 ) r \times 2/3 { a' a' a' }  |
		a' 1 ~  |
		a' 2 r  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		Cor -- de -- ro de Dios que qui -- tas
		el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros,
		ten pie -- dad.

		Cor -- de -- ro de Dios que qui -- tas
		el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros,
		ten pie -- dad.

		Cor -- de -- ro de Dios que qui -- tas
		el pe -- ca -- do del mun -- do,
		da -- nos la paz, __ da -- nos la paz.
		da -- nos la paz, __ da -- nos la paz.

	}
>>
