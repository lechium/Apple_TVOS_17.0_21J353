//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTFetchRoadsideProvidersContext, CTSelectRoadsideProviderContext, CTStewieCompressionRequest, CTStewieConnectionAssistantEvent, CTStewieDeviceOrientationData, CTStewieExitContext, CTStewieRequestContext, NSDictionary;

@protocol CTXPCServiceStewieInterface
- (void)getResumableRoadsideProvider:(void (^)(CTResumableRoadsideProvider *, NSError *))arg1;
- (void)selectRoadsideProviderWithContext:(CTSelectRoadsideProviderContext *)arg1 completion:(void (^)(CTSelectRoadsideProviderResponse *, NSError *))arg2;
- (void)fetchRoadsideProvidersWithContext:(CTFetchRoadsideProvidersContext *)arg1 completion:(void (^)(CTRoadsideProviders *, NSError *))arg2;
- (void)testStewieCommand:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)reportStewieConnectionAssistantEvent:(CTStewieConnectionAssistantEvent *)arg1 completion:(void (^)(NSError *))arg2;
- (void)activateStewieEmergencyTryOutWithCompletion:(void (^)(NSError *))arg1;
- (void)compressWithStewieCodec:(CTStewieCompressionRequest *)arg1 completion:(void (^)(CTStewieCompressionResult *, NSError *))arg2;
- (void)reportStewieDeviceOrientation:(CTStewieDeviceOrientationData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setStewieBlocked:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)getConnectionAssistantServicePlot:(void (^)(CTCAServicePlot *, NSError *))arg1;
- (void)getConnectionAssistantState:(void (^)(CTConnectionAssistantState *, NSError *))arg1;
- (void)getConnectionAssistantConfig:(void (^)(CTConnectionAssistantConfig *, NSError *))arg1;
- (void)exitStewieWithContext:(CTStewieExitContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)requestStewieWithContext:(CTStewieRequestContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getStewieSupport:(void (^)(CTStewieSupport *, NSError *))arg1;
@end

