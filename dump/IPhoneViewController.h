/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@interface IPhoneViewController : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/ <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate>
{
}

- (void)messageComposeViewController:(id)fp8 didFinishWithResult:(int)fp12;
- (void)mailComposeController:(id)fp8 didFinishWithResult:(int)fp12 error:(id)fp16;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (unsigned int)supportedInterfaceOrientationsForWindow:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)loadView;

@end

