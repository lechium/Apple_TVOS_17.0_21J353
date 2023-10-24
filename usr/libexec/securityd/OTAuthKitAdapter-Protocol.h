//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;
@protocol OTAuthKitAdapterNotifier;

@protocol OTAuthKitAdapter
- (void)deliverAKDeviceListDeltaMessagePayload:(NSDictionary *)arg1;
- (void)registerNotification:(id <OTAuthKitAdapterNotifier>)arg1;
- (void)fetchCurrentDeviceListByAltDSID:(NSString *)arg1 reply:(void (^)(NSSet *, NSString *, NSError *))arg2;
- (NSString *)machineID:(id *)arg1;
- (_Bool)accountIsDemoAccountByAltDSID:(NSString *)arg1 error:(id *)arg2;
- (_Bool)accountIsCDPCapableByAltDSID:(NSString *)arg1;
@end

