//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/PARBag.h>

@class NSString;

@interface PARBag (parsecd)
- (id)valueForKey:(id)arg1 shouldConsiderOverrides:(_Bool)arg2;	// IMP=0x00200000000becf1
- (id)valueForKey:(id)arg1 ofType:(Class)arg2;	// IMP=0x00100000000bebb2
- (id)findConfigForUserAgent:(id)arg1;	// IMP=0x00100000000bea6f
- (id)rawConfig;	// IMP=0x00100000000be9b5
@property(nonatomic, readonly) NSString *searchURLString;
@property(nonatomic, readonly) _Bool isExpired;
@end

