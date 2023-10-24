//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PreviewsInjection/NSObject-Protocol.h>

@class NSData, NSString, NSXPCListenerEndpoint, UVBSEndpoint, UVPropertyList;

@protocol UVAgentControlServiceProtocol <NSObject>
- (oneway void)grantExecutePermissionWithURLWrapperData:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)copyURLWithURLWrapperData:(NSData *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (oneway void)connectJITWithEndpoint:(NSXPCListenerEndpoint *)arg1 setupPayload:(UVPropertyList *)arg2 replyHandler:(void (^)(UVPropertyList *, NSError *))arg3;
- (oneway void)connectShellMessagePipeWithEndpoint:(UVBSEndpoint *)arg1;
- (oneway void)connectHostMessagePipeWithEndpoint:(UVBSEndpoint *)arg1;
- (oneway void)createPreviewSceneAgentWithEndpoint:(UVBSEndpoint *)arg1 forSceneIdentifier:(NSString *)arg2;
- (oneway void)createPreviewNonUIAgentWithEndpoint:(UVBSEndpoint *)arg1;
@end

