//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaGroupsDaemon/NSObject-Protocol.h>

@class MGRemoteQueryServerClient;

@protocol MGRemoteQueryServerClientDelegate <NSObject>
- (void)clientInvalidated:(MGRemoteQueryServerClient *)arg1;
- (void)clientLostTransaction:(MGRemoteQueryServerClient *)arg1;
@end
