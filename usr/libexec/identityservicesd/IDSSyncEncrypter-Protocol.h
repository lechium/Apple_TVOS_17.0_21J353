//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;
@protocol IDSEncryptionSyncQueue;

@protocol IDSSyncEncrypter <NSObject>
- (NSData *)encryptData:(NSData *)arg1 forceSizeOptimizations:(_Bool)arg2 resetState:(_Bool)arg3 withEncryptedAttributes:(NSDictionary *)arg4 usedIdentifier:(id *)arg5 onQueue:(id <IDSEncryptionSyncQueue>)arg6 metadata:(id *)arg7 error:(id *)arg8;
@end

