\context Staff = "Violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Staff.midiInstrument = "Violin"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key a \minor

		R1*4  |
%% 5
		a' 4. b' 8 c'' e'' 4.  |
		d'' 2 b' ~  |
		b' 1  |
		d'' 4. c'' 8 b' c'' 4.  |
		c'' 2 a' ~  |
%% 10
		a' 1  |
		a' 4. b' 8 c'' g'' 4.  |
		g'' 2 b' ~  |
		b' 1  |
		f'' 4. e'' 8 d'' c'' 4.  |
%% 15
		f'' 4. e'' 8 d'' c'' 4.  |
		b' 2 e'' ~  |
		e'' 1  |
		R1*30  |
		\bar "|."
	}
>>
