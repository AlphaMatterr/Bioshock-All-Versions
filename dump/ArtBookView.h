/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

@class ArtBookImageView, NSTimer, UIButton;

@interface ArtBookView : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/
{
    ArtBookImageView *imageView;
    UIButton *btnNextImage;
    UIButton *btnPreImage;
    UIButton *btnReturnToMainMenu;
    int curImageId;
    NSTimer *timer;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)init;
- (void)updateView;
- (void)initButtons;
- (void)preImageButtonPress:(id)fp8;
- (void)nextImageButtonPress:(id)fp8;
- (void)changeImage:(int)fp8 withButton:(id)fp12;
- (void)returnToMainMenuButtonPress:(id)fp8;
- (void)initButton:(id)fp8 withBg:(id)fp12 withHilightBg:(id)fp16;

@end

