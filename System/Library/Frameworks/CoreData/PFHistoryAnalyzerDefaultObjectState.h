//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PFHistoryAnalyzerDefaultObjectState : NSObject
{
    NSManagedObjectID *_analyzedObjectID;	// 8 = 0x8
    NSNumber *_originalTransactionNumber;	// 16 = 0x10
    long long _originalChangeType;	// 24 = 0x18
    NSNumber *_finalTransactionNumber;	// 32 = 0x20
    long long _finalChangeType;	// 40 = 0x28
    NSDictionary *_tombstone;	// 48 = 0x30
    NSString *_finalChangeAuthor;	// 56 = 0x38
}

@property(readonly, nonatomic) NSString *finalChangeAuthor; // @synthesize finalChangeAuthor=_finalChangeAuthor;
@property(readonly, nonatomic) NSDictionary *tombstone; // @synthesize tombstone=_tombstone;
@property(readonly, nonatomic) long long finalChangeType; // @synthesize finalChangeType=_finalChangeType;
@property(readonly, nonatomic) NSNumber *finalTransactionNumber; // @synthesize finalTransactionNumber=_finalTransactionNumber;
@property(readonly, nonatomic) long long originalChangeType; // @synthesize originalChangeType=_originalChangeType;
@property(readonly, nonatomic) NSNumber *originalTransactionNumber; // @synthesize originalTransactionNumber=_originalTransactionNumber;
@property(readonly, nonatomic) NSManagedObjectID *analyzedObjectID; // @synthesize analyzedObjectID=_analyzedObjectID;
- (id)description;	// IMP=0x000000000013ba2d
- (void)updateWithChange:(id)arg1;	// IMP=0x000000000013b959
- (void)dealloc;	// IMP=0x000000000013b8e7
- (id)initWithOriginalChange:(id)arg1;	// IMP=0x000000000013b7d9

@end

