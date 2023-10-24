//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADPeerInfo, AFCommandExecutionInfo, NSDate;
@protocol OS_voucher;

@interface ADCommandExecutionContext : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    AFCommandExecutionInfo *_info;	// 16 = 0x10
    NSObject<OS_voucher> *_voucher;	// 24 = 0x18
    _Bool _presentedUIResponse;	// 32 = 0x20
    NSDate *_creationDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000303f4b
@property(nonatomic) _Bool presentedUIResponse; // @synthesize presentedUIResponse=_presentedUIResponse;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000303ed1
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000303e72
@property(readonly, copy, nonatomic) AFCommandExecutionInfo *info;
- (id)description;	// IMP=0x0010000000303ca8
@property(readonly, nonatomic) ADPeerInfo *originPeerInfo;
@property(readonly, nonatomic) _Bool isFromRemote;
- (void)updateInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000303aef
- (id)initWithInfo:(id)arg1;	// IMP=0x0010000000303a30

@end

