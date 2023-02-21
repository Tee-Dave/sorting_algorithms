#ifndef DECK_H_
#define DECK_H_

/**
 * enum kind_e - enum of cards
 * @SPADE: Spade card
 * @HEART: Heart card
 * @CLUB: Club card
 * @DIAMOND: Diamond card
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

int val_cmp(const char *str1, const char *str2);
int card_key(const card_t *card);
void swap_nodes(deck_node_t **list, deck_node_t *l, deck_node_t *r);
void sort_deck(deck_node_t **deck);

#endif
