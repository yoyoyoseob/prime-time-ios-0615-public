//
//  FISPrimeTimeTableViewController.h
//  PrimeTime
//
//  Created by Yoseob Lee on 6/17/15.
//  Copyright (c) 2015 FIS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FISPrimeTimeTableViewController : UITableViewController
@property (nonatomic, strong) NSMutableArray *primes;
@property (nonatomic) NSInteger potentialPrime;

-(NSInteger)primeNumber:(NSInteger)prime;

@end
