//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLSessionTask.h>

@interface NSURLSessionTask (Daemon)
- (void)setITunesStoreDataConsumer:(id)arg1;	// IMP=0x0010000000135c4e
- (id)ITunesStoreDataConsumer;	// IMP=0x0010000000135c3d
- (long long)ITunesStoreCancelReason;	// IMP=0x0010000000135bfb
- (id)ITunesStoreCancelError;	// IMP=0x0010000000135bea
- (void)cancelWithITunesStoreReason:(long long)arg1 error:(id)arg2;	// IMP=0x0010000000135b43
@end

