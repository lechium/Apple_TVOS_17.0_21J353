//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVoiceController, NSMutableArray;
@protocol AVAudioRemoteInputPlugin;

__attribute__((visibility("hidden")))
@interface AVVCPluginRemoteInputHost : NSObject
{
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;	// 8 = 0x8
    AVVoiceController *_mMotherController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cba5a
@property(nonatomic) __weak AVVoiceController *mMotherController; // @synthesize mMotherController=_mMotherController;
- (id)mockPluginEndpoint;	// IMP=0x00000000000cb689
- (void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2;	// IMP=0x00000000000cb24e
- (void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2;	// IMP=0x00000000000cae13
- (void)setParentVoiceController:(id)arg1;	// IMP=0x00000000000cacd7
- (id)findFirstBluetoothDevice;	// IMP=0x00000000000ca85a
- (id)findDeviceWithIdentifier:(id)arg1;	// IMP=0x00000000000ca227
- (id)allBundles:(id *)arg1;	// IMP=0x00000000000c9bf4
- (void)invalidatePlugins;	// IMP=0x00000000000c996c
- (void)dealloc;	// IMP=0x00000000000c987a
- (id)init;	// IMP=0x00000000000c91f9

@end
