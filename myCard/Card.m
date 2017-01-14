//
//  Card.m
//  myCard
//
//  Created by LiaoDanqi on 11/26/16.
//  Copyright © 2016 LiaoDanqi. All rights reserved.
//

#import "Card.h"

@interface Card ()

@end

@implementation Card

//@synthesize contents = _contents;
//
//- (NSString *)contents
//{
//    return _contents;
//}
//
//- (void) setContents:(NSString *)contents
//{
//    _contents = contents;
//}

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        // "==" only compares the pointer so don't use it here
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    
    return score;
}

@end