//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallProgress/NSObject-Protocol.h>

@class IPInstallableProgressData, LSApplicationIdentity;

@protocol IPXPCClientInterface <NSObject>
- (void)installableForIdentity:(LSApplicationIdentity *)arg1 progressEndedForReason:(unsigned long long)arg2;
- (void)installableForIdentity:(LSApplicationIdentity *)arg1 progressChanged:(IPInstallableProgressData *)arg2;
@end
