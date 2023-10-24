//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementStore/RMStoreProtocol-Protocol.h>

@class NSString, RMModelDeclarationBase;

@protocol RMMutableStoreProtocol <RMStoreProtocol>
- (_Bool)setMetadataValue:(id)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
- (void)applyChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)deleteDeclarationWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveDeclaration:(RMModelDeclarationBase *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

