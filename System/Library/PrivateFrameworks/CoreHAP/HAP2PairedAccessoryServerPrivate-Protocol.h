//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerPrivate-Protocol.h>
#import <CoreHAP/HAP2PairedAccessoryServer-Protocol.h>

@class NSArray;
@protocol HAP2Cancelable, HAP2PairedAccessoryServerPrivate, HAP2UnpairedAccessoryServerPrivate;

@protocol HAP2PairedAccessoryServerPrivate <HAP2AccessoryServerPrivate, HAP2PairedAccessoryServer>
- (void)clearAccessories;
- (void)pollAccessory;
- (void)verifyConnection;
- (void)handleLostDiscoveryAdvertisementWithWillSleep:(_Bool)arg1;
- (void)handleLostDiscoveryAdvertisement;
- (void)handleReestablishedSession;
- (void)handleUpdatedCharacteristicValues:(NSArray *)arg1;
- (void)handleEvents:(NSArray *)arg1;
- (id <HAP2Cancelable>)disableNotificationsForCharacteristics:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (id <HAP2Cancelable>)enableNotificationsForCharacteristics:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (id <HAP2Cancelable>)writeValuesForCharacteristics:(NSArray *)arg1 timeout:(double)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (id <HAP2Cancelable>)readValuesForCharacteristics:(NSArray *)arg1 timeout:(double)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id <HAP2PairedAccessoryServerPrivate>)arg1;
- (void)becomeUnpairedWithAccessoryServer:(id <HAP2UnpairedAccessoryServerPrivate>)arg1;
@end

