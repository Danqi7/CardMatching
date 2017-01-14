//
//  Deck.h
//  myCard
//
//  Created by LiaoDanqi on 11/27/16.
//  Copyright © 2016 LiaoDanqi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card; //optional attop

- (Card *)drawRandomCard;

@end
