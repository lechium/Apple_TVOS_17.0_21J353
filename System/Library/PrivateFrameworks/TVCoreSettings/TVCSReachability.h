//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVCSReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;	// 8 = 0x8
}

+ (id)reachabilityForInternetConnection;	// IMP=0x006000000000fd66
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;	// IMP=0x006000000000fd19
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x006000000000fcac
- (long long)currentReachabilityStatus;	// IMP=0x000000000001003d
- (_Bool)connectionRequired;	// IMP=0x0000000000010011
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000000ff20
- (void)dealloc;	// IMP=0x000000000000fed4
- (void)stopNotifier;	// IMP=0x000000000000fe9e
- (_Bool)startNotifier;	// IMP=0x000000000000fdc2

@end

