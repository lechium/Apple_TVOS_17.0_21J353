//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRExternalDeviceTransportConnection, NSData, NSError;

@protocol MRExternalDeviceTransportConnectionDelegate <NSObject>
- (void)transport:(MRExternalDeviceTransportConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)transportDidClose:(MRExternalDeviceTransportConnection *)arg1 error:(NSError *)arg2;
@end

