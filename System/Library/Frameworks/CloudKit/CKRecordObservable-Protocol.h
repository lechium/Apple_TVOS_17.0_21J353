//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSObject-Protocol.h>

@class CKRecordObserver;

@protocol CKRecordObservable <NSObject>
- (void)removeRecordObserver:(CKRecordObserver *)arg1;
- (void)addRecordObserver:(CKRecordObserver *)arg1 block:(void (^)(CKRecordChange *))arg2;
@end
