//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKAvailabilitySpan, NSDate;

__attribute__((visibility("hidden")))
@interface EKAvailabilityCachedSpan : NSObject
{
    NSDate *_creationDate;	// 8 = 0x8
    EKAvailabilitySpan *_span;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012c09e
@property(retain, nonatomic) EKAvailabilitySpan *span; // @synthesize span=_span;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)description;	// IMP=0x000000000012bf57
- (id)initWithSpan:(id)arg1;	// IMP=0x000000000012bebb

@end
