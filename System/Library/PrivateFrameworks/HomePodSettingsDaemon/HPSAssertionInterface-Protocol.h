//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomePodSettingsDaemon/NSObject-Protocol.h>

@class NSString;

@protocol HPSAssertionInterface <NSObject>
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)takeAssertionWithIdentifier:(NSString *)arg1 forAssertion:(unsigned long long)arg2;
@end

