//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ArrayHash : NSObject
{
    NSArray *_array;	// 8 = 0x8
}

@property(readonly) NSArray *array; // @synthesize array=_array;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003daae
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003da40
- (unsigned long long)hash;	// IMP=0x001000000003d924
- (void)dealloc;	// IMP=0x001000000003d8e9
- (id)initWithArray:(id)arg1;	// IMP=0x001000000003d899

@end
