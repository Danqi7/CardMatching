//
//  Card.h
//  myCard
//
//  Created by LiaoDanqi on 11/26/16.
//  Copyright © 2016 LiaoDanqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

//primitive type is NOT stored in heap
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(Card *)card;

@end

