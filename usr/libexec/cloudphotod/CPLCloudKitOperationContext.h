//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKOperation, NSArray, NSDate;

@interface CPLCloudKitOperationContext : NSObject
{
    NSDate *_firstProgressDate;	// 8 = 0x8
    NSDate *_lastProgressDate;	// 16 = 0x10
    _Bool _cancelled;	// 24 = 0x18
    CKOperation *_operation;	// 32 = 0x20
    NSArray *_bundleIdentifiers;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    NSDate *_lastBatchDate;	// 56 = 0x38
    double _progress;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000c0517
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSDate *lastBatchDate; // @synthesize lastBatchDate=_lastBatchDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(nonatomic) __weak CKOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) _Bool mightBeBlocked;
@property(readonly, nonatomic) double approximativeBlockedInterval;
- (id)startDateDescriptionWithNow:(id)arg1;	// IMP=0x00100000000c0176
- (id)operationDescription;	// IMP=0x00100000000c016e
- (id)extendedStatusDescriptionStrings;	// IMP=0x00100000000c0166

@end

