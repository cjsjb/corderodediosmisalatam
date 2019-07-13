% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Cordero de Dios"
	subtitle = "Como Quimantú"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*47  %% 1-76
}
globalTempo = {
	\tempo 4 = 72  \skip 1*47
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "corderomisacriolla-acordes.inc"
		\new StaffGroup <<
			\include "corderomisacriolla-soprano.inc"
			\include "corderomisacriolla-mezzo.inc"
			\include "corderomisacriolla-tenor.inc"
		>>
		\include "corderomisacriolla-violin.inc"

	>>

	\layout {
		\context {
			\RemoveEmptyStaffContext
		}
	}
}
