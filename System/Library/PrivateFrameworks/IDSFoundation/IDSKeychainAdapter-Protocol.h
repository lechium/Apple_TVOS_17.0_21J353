//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class NSData, NSString;

@protocol IDSKeychainAdapter <NSObject>
- (_Bool)removeKeychainDataOnService:(NSString *)arg1 account:(NSString *)arg2 error:(int *)arg3;
- (_Bool)getKeychainData:(id *)arg1 service:(NSString *)arg2 account:(NSString *)arg3 accessGroup:(NSString *)arg4 error:(int *)arg5;
- (_Bool)setKeychainData:(NSData *)arg1 service:(NSString *)arg2 account:(NSString *)arg3 accessGroup:(NSString *)arg4 allowSync:(_Bool)arg5 error:(int *)arg6;
@end

