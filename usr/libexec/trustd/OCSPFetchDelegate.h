//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OCSPFetchDelegate
{
}

- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x004000000002550c
- (id)createNextRequest:(id)arg1 context:(id)arg2;	// IMP=0x0010000000024b7a
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000000246c3
- (_Bool)fetchNext:(id)arg1 context:(id)arg2;	// IMP=0x0010000000024580

@end
