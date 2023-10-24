//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface StoreDownloadQueueRequest : NSObject
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    _Bool _cancelsDuplicateDownloads;	// 16 = 0x10
    long long _purchaseIdentifier;	// 24 = 0x18
    NSString *_queueIdentifier;	// 32 = 0x20
    NSString *_reason;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00200000000b356f
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(nonatomic) long long purchaseIdentifier; // @synthesize purchaseIdentifier=_purchaseIdentifier;
@property(nonatomic) _Bool cancelsDuplicateDownloads; // @synthesize cancelsDuplicateDownloads=_cancelsDuplicateDownloads;
@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b34d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b33a9
- (unsigned long long)hash;	// IMP=0x00100000000b3393
- (id)description;	// IMP=0x00100000000b3333
@property(readonly, nonatomic) NSString *queueCountURLBagKey;
@property(readonly, nonatomic) NSString *queueContentsURLBagKey;
- (void)dealloc;	// IMP=0x00100000000b3280

@end

