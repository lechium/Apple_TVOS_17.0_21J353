//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDPowerAssertion : NSObject
{
    _Bool _isParked;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
}

+ (id)assertionForOperation:(id)arg1;	// IMP=0x0040000000063e63
- (void).cxx_destruct;	// IMP=0x0020000000064506
// Error: Property attributes should begin with the type ('T') attribute, property name: operation
// Property attributes: (null)

@property(nonatomic) _Bool isParked; // @synthesize isParked=_isParked;
- (void)_release;	// IMP=0x00100000000643f8
- (void)_retain;	// IMP=0x0010000000064317
- (void)unpark;	// IMP=0x0010000000064224
- (void)park;	// IMP=0x001000000006412e
- (void)stayAliveThroughHereAtLeast;	// IMP=0x0010000000064128
- (void)dealloc;	// IMP=0x0010000000064085
- (id)initForOperation:(id)arg1;	// IMP=0x0010000000063f8d

@end

