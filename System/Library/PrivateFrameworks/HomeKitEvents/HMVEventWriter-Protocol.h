//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSUUID;

@protocol HMVEventWriter
- (void)clearEventsForHomeWithIdentifier:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)writeFakeEventsWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 count:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)writeWindowEventWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 roomIdentifier:(NSUUID *)arg3 roomName:(NSString *)arg4 accessoryIdentifier:(NSUUID *)arg5 accessoryName:(NSString *)arg6 state:(long long)arg7 userIdentifier:(NSUUID *)arg8 completion:(void (^)(NSError *))arg9;
- (void)writeSmokeDetectorEventWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 roomIdentifier:(NSUUID *)arg3 roomName:(NSString *)arg4 accessoryIdentifier:(NSUUID *)arg5 accessoryName:(NSString *)arg6 state:(long long)arg7 userIdentifier:(NSUUID *)arg8 completion:(void (^)(NSError *))arg9;
- (void)writeSecuritySystemEventWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 roomIdentifier:(NSUUID *)arg3 roomName:(NSString *)arg4 accessoryIdentifier:(NSUUID *)arg5 accessoryName:(NSString *)arg6 state:(long long)arg7 userIdentifier:(NSUUID *)arg8 completion:(void (^)(NSError *))arg9;
- (void)writeLockEventWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 roomIdentifier:(NSUUID *)arg3 roomName:(NSString *)arg4 accessoryIdentifier:(NSUUID *)arg5 accessoryName:(NSString *)arg6 state:(long long)arg7 userIdentifier:(NSUUID *)arg8 completion:(void (^)(NSError *))arg9;
- (void)writeGarageDoorEventWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 roomIdentifier:(NSUUID *)arg3 roomName:(NSString *)arg4 accessoryIdentifier:(NSUUID *)arg5 accessoryName:(NSString *)arg6 state:(long long)arg7 userIdentifier:(NSUUID *)arg8 completion:(void (^)(NSError *))arg9;
- (void)writeDoorEventWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 roomIdentifier:(NSUUID *)arg3 roomName:(NSString *)arg4 accessoryIdentifier:(NSUUID *)arg5 accessoryName:(NSString *)arg6 state:(long long)arg7 userIdentifier:(NSUUID *)arg8 completion:(void (^)(NSError *))arg9;
- (void)writeContactSensorEventWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 roomIdentifier:(NSUUID *)arg3 roomName:(NSString *)arg4 accessoryIdentifier:(NSUUID *)arg5 accessoryName:(NSString *)arg6 state:(long long)arg7 userIdentifier:(NSUUID *)arg8 completion:(void (^)(NSError *))arg9;
@end

